﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using System.Text;
using System;

//Code adapted from answers.unity.com
public class CoroutineWithData {
	public Coroutine coroutine { get; private set; }
	public object result;
	private IEnumerator target;
	public CoroutineWithData(MonoBehaviour owner, IEnumerator target) {
		this.target = target;
		this.coroutine = owner.StartCoroutine(Run());
	}

	private IEnumerator Run() {
		while(target.MoveNext()) {
			result = target.Current;
			yield return result;
		}
	}
}

public class WWWHandler : MonoBehaviour {

	public static WWWHandler Instance { set; get; }
	public Text errorText;
	public TransitionalObject errorTransitionalObject;


	//References this tutorial: https://docs.unity3d.com/ScriptReference/WWW.html

	const string getAnnotationUrl = "https://hikar.herokuapp.com/api/annotation";
	const string postAnnotationUrl = "https://hikar.herokuapp.com/api/annotation";
	const string userURL = "https://hikar.herokuapp.com/api/users/";
	const string signIn = "https://hikar.herokuapp.com/api/signin";
	const string signUp = "https://hikar.herokuapp.com/api/signup";


	const string getTestTrailUrl = "https://hikar.herokuapp.com/getTest";
	const string getTrailUrl = "https://hikar.herokuapp.com/api/trails/";  //leaving blank gets all trails
	const string getTrailsUrl = "https://hikar.herokuapp.com/api/query/"; //   latitude/longitude/radius

	string getFeaturesUrl = "https://api.mapbox.com/v4/mapbox.mapbox-terrain-v2/tilequery/";

	Vector2 testLocation = new Vector2(43.7063846f, -72.29164739999999f);

	const string accesKeyMapBox = ".json?radius=5000&access_token=pk.eyJ1IjoiamN0d2FrZSIsImEiOiJjamQ1NHN2MGEweDJkMndxcmI3eHRuczRlIn0.if6fE47kjlJQbrKmRMMpZg";

	void Start () {
		StartCoroutine(GetFeaturesAtLocation (testLocation));
	}

	public IEnumerator PostAnnotation(string signType, string text, double lat, double lon, double offset, int color, int style)
	{
		WWWForm form = new WWWForm();
		form.AddField ("type", signType);
		form.AddField ("text", text);
		form.AddField ("lat", lat.ToString());
		form.AddField ("long", lon.ToString());
		form.AddField ("style", style.ToString());
		form.AddField ("color", color.ToString());
		form.AddField ("offset", offset.ToString ());

		using (var w = UnityWebRequest.Post (postAnnotationUrl, form))
		{
			yield return w.SendWebRequest();
			if (w.isNetworkError || w.isHttpError) 
			{
				yield return w.error + ". Post unsuccessful";
				errorTransitionalObject.TriggerTransition ();
				errorText.gameObject.SetActive (true);
				errorText.text = "No network connection detected.";
			}
			else
			{
				yield return "Annotation successfully posted";
			}
		}
	}
	public IEnumerator PostSignIn(string username, string password)
	{
		if (!string.IsNullOrEmpty (username) && !string.IsNullOrEmpty (password)) {
			WWWForm form = new WWWForm ();
			form.AddField ("username", username);
			form.AddField ("password", password);
			using (var w = UnityWebRequest.Post (signIn, form)) {
				yield return w.SendWebRequest ();
				if (w.isNetworkError || w.isHttpError) {
					yield return w.downloadHandler.text;
					errorTransitionalObject.TriggerTransition ();
					errorText.gameObject.SetActive (true);
					if (w.downloadHandler.text == "Unauthorized") {
						errorText.text = "Invalid credentials";	
					} else {
						errorText.text = "No network connection detected.";
					}
					yield return new WaitForSeconds (2.5f);
					errorTransitionalObject.TriggerFadeOutIfActive ();
				} else {
					yield return w.downloadHandler.text;
				}
			}
		} else {
			errorTransitionalObject.TriggerTransition ();
			errorText.gameObject.SetActive (true);
			errorText.text = "One or more fields are invalid.";	
			yield return new WaitForSeconds (2.5f);
			errorTransitionalObject.TriggerFadeOutIfActive ();
		}
	}
	public IEnumerator PostSignUp(string username, string password)
	{
		if (!string.IsNullOrEmpty (username) && !string.IsNullOrEmpty (password)) {
			WWWForm form = new WWWForm ();
			form.AddField ("username", username);
			form.AddField ("password", password);
			using (var w = UnityWebRequest.Post (signUp, form)) {
				yield return w.SendWebRequest ();
				if (w.isNetworkError || w.isHttpError) {
					yield return w.downloadHandler.text;
					errorTransitionalObject.TriggerTransition ();
					errorText.gameObject.SetActive (true);
					if (w.downloadHandler.text == "user already exists") {
						errorText.text = "User already exists.";
					} else {
						errorText.text = "No network connection detected.";
					}
					yield return new WaitForSeconds (2.5f);
					errorTransitionalObject.TriggerFadeOutIfActive ();
				} else {
					yield return w.downloadHandler.text;
				}
			}
		} else {
			errorTransitionalObject.TriggerTransition ();
			errorText.gameObject.SetActive (true);
			errorText.text = "One or more fields are invalid.";	
			yield return new WaitForSeconds (2.5f);
			errorTransitionalObject.TriggerFadeOutIfActive ();
		}
	}
	public IEnumerator GetUserInfo(string username)
	{
		StringBuilder userQuery = new StringBuilder (userURL);
		userQuery.Append (username);
		using (WWW www = new WWW (userQuery.ToString()))
		{
			yield return www;
			if (www.error != null) {
				yield return www.error + ". Get unsuccessful";
				errorTransitionalObject.TriggerTransition ();
				errorText.gameObject.SetActive (true);
				errorText.text = "No network connection detected.";
			} else {
				yield return www.text;
			}
		}
	}

	public IEnumerator UpdateUserSettings(string username, string radius, string toggle)
	{
		StringBuilder userQuery = new StringBuilder (userURL);
		userQuery.Append (username);

		WWWForm form = new WWWForm ();
		form.AddField ("radius", radius);
		form.AddField ("toggleAnnotations", toggle);

		using (var w = UnityWebRequest.Post (userQuery.ToString(), form))
		{
			yield return w.SendWebRequest();
			if (w.isNetworkError || w.isHttpError) 
			{
				yield return w.error + ". Update unsuccessful";
				errorTransitionalObject.TriggerTransition ();
				errorText.gameObject.SetActive (true);
				errorText.text = "No network connection detected.";
			}
			else
			{
				yield return "User successfully updated";
			}
		}
	}

	public IEnumerator UpdateUserTrail(string username, string trail)
	{
		StringBuilder userQuery = new StringBuilder (userURL);
		userQuery.Append (username);

		WWWForm form = new WWWForm();
		form.AddField ("trail", trail);
		using (var w = UnityWebRequest.Post (userQuery.ToString(), form))
		{
			yield return w.SendWebRequest();
			if (w.isNetworkError || w.isHttpError) 
			{
				yield return w.error + ". Update unsuccessful";
				errorTransitionalObject.TriggerTransition ();
				errorText.gameObject.SetActive (true);
				errorText.text = "No network connection detected.";
			}
			else
			{
				yield return "User successfully updated";
			}
		}
	}

	public IEnumerator UpdateUserDistance (string username, double distance)
	{
		StringBuilder userQuery = new StringBuilder (userURL);
		userQuery.Append (username);

		WWWForm form = new WWWForm ();
		form.AddField ("distance", distance.ToString ());
		using (var w = UnityWebRequest.Post (userQuery.ToString(), form))
		{
			yield return w.SendWebRequest();
			if (w.isNetworkError || w.isHttpError) 
			{
				yield return w.error + ". Update unsuccessful";
				errorTransitionalObject.TriggerTransition ();
				errorText.gameObject.SetActive (true);
				errorText.text = "No network connection detected.";
			}
			else
			{
				yield return "User successfully updated";
			}
		}
	}

	public IEnumerator GetTestTrail()
	{
		using (WWW www = new WWW (getTestTrailUrl))
		{
			yield return www;
			if (www.error != null) {
				yield return www.error + ". Get unsuccessful";
				errorTransitionalObject.TriggerTransition ();
				errorText.gameObject.SetActive (true);
				errorText.text = "No network connection detected.";
			} else {
				yield return www.text;
			}
		}
	}

	public IEnumerator GetTrail(string name){
		if (!String.IsNullOrEmpty (name)) {
			//string isn't null, try to query
			StringBuilder query = new StringBuilder (getTrailUrl);
			query.Append (name.Replace (' ', '-'));
			using (WWW www = new WWW (query.ToString())) {
				yield return www;
				if (www.error != null) {
					yield return www.error + ". Get unsuccessful";
					errorTransitionalObject.TriggerTransition ();
					errorText.gameObject.SetActive (true);
					errorText.text = "No network connection detected.";
				} else {
					yield return www.text;
				}
			}
		} else {
			Debug.Log ("Empty search query");
		}
	}

	public IEnumerator GetTrails(double lon, double lat, int miles){
		StringBuilder query = new StringBuilder(getTrailsUrl);

		query.Append("/" + lat.ToString() + "/" + lon.ToString() + "/" + miles.ToString());

		using (WWW www = new WWW (query.ToString()))
		{
			yield return www;
			if (www.error != null) {
				yield return www.error + ". Get unsuccessful";
				errorTransitionalObject.TriggerTransition ();
				errorText.gameObject.SetActive (true);
				errorText.text = "No network connection detected.";
			} else {
				yield return www.text;
			}
		}
	}


	public IEnumerator GetAnnotation()
	{
		using (WWW www = new WWW (getAnnotationUrl))
		{
			yield return www;
			if (www.error != null) {
				yield return www.error + ". Get unsuccessful";
				errorTransitionalObject.TriggerTransition ();
				errorText.gameObject.SetActive (true);
				errorText.text = "No network connection detected.";
			} else {
				yield return www.text;
			}
		}
	}

	public IEnumerator GetFeaturesAtLocation(Vector2 latLong)
	{
		getFeaturesUrl = getFeaturesUrl + latLong.x.ToString() + "," + latLong.y.ToString() + accesKeyMapBox;
		using (WWW www = new WWW (getFeaturesUrl))
		{
			yield return www;
			if (www.error != null) {
				Debug.Log ("Data retrieval unsuccessful");
				yield return www.error + ". Data retrieval unsuccessful";
				errorTransitionalObject.TriggerTransition ();
				errorText.gameObject.SetActive (true);
				errorText.text = "No network connection detected.";
			} else {
				yield return www.text;
			}
		}
	}
}

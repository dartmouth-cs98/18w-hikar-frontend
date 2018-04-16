﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
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


	//References this tutorial: https://docs.unity3d.com/ScriptReference/WWW.html

//	string debugPostNodeUrl = "http://localhost:9090/postNode";

 	const string baseUrl = "https://hikar.herokuapp.com";
	const string getNodeUrl = "https://hikar.herokuapp.com/getNode";
	const string postNodeUrl = "https://hikar.herokuapp.com/postNode";
	const string getAnnotationUrl = "https://hikar.herokuapp.com/getAnnotation";
	const string postAnnotationUrl = "https://hikar.herokuapp.com/postAnnotation";
	const string updateUserTrail = "https://hikar.herokuapp.com/updateUserTrail";
	const string getUserTrail = "https://hikar.herokuapp.com/getUserTrail";

	const string getTestTrailUrl = "https://hikar.herokuapp.com/getTest";
	const string getTrailUrl = "https://hikar.herokuapp.com/getTrail/";
	const string getTrailsUrl = "https://hikar.herokuapp.com/queryTrail/"; //   latitude/longitude/radius

	string getFeaturesUrl = "https://api.mapbox.com/v4/mapbox.mapbox-terrain-v2/tilequery/";

	Vector2 testLocation = new Vector2(43.7063846f, -72.29164739999999f);

	const string accesKeyMapBox = ".json?radius=5000&access_token=pk.eyJ1IjoiamN0d2FrZSIsImEiOiJjamQ1NHN2MGEweDJkMndxcmI3eHRuczRlIn0.if6fE47kjlJQbrKmRMMpZg";

	// Use this for initialization
	public IEnumerator PostNode(double lat, double lon)
	{
		WWWForm form = new WWWForm();
		form.AddField("lat", lat.ToString());
		form.AddField ("long", lon.ToString());
		using (var w = UnityWebRequest.Post (postNodeUrl, form))
		{
			yield return w.SendWebRequest();
			if (w.isNetworkError || w.isHttpError) 
			{
				yield return w.error + ". Post unsuccessful";
			}
			else
			{
				yield return "Annotation successfully posted";
			}
		}
	}

	public IEnumerator PostAnnotation(string signType, string text, float lat, float lon)
	{
		WWWForm form = new WWWForm();
		form.AddField("type", signType);
		form.AddField ("text", text);
		form.AddField ("lat", lat.ToString());
		form.AddField ("long", lon.ToString());
		using (var w = UnityWebRequest.Post (postAnnotationUrl, form))
		{
			yield return w.SendWebRequest();
			if (w.isNetworkError || w.isHttpError) 
			{
				yield return w.error + ". Post unsuccessful";
			}
			else
			{
				yield return "Annotation successfully posted";
			}
		}
	}

	public IEnumerator GetNode()
	{
		using (WWW www = new WWW (getNodeUrl))
		{
			yield return www;
			if(www.error != null)
				yield return www.error + ". Get unsuccessful";
			else
				yield return www.text;
		}
	}

	//query by radius
	public IEnumerator GetNode(int radius)
	{
		using (WWW www = new WWW (getNodeUrl))
		{
			yield return www;
			if(www.error != null)
				yield return www.error + ". Get unsuccessful";
			else
				yield return www.text;
		}
	}

	public IEnumerator GetUserTrail()
	{
		using (WWW www = new WWW (getUserTrail))
		{
			yield return www;
			if(www.error != null)
				yield return www.error + ". Get unsuccessful";
			else
				yield return www.text;
		}
	}

	public IEnumerator UpdateUserTrail(string trailName)
	{
		//Post with the unique ID given by mLab (can't find update function)
		using (WWW www = new WWW (updateUserTrail)) {
			yield return www;
			if(www.error != null)
				yield return www.error + ". Get unsuccessful";
			else
				yield return www.text;
		}
	}
	public IEnumerator GetTestTrail()
	{
		using (WWW www = new WWW (getTestTrailUrl))
		{
			yield return www;
			if(www.error != null)
				yield return www.error + ". Get unsuccessful";
			else
				yield return www.text;
		}
	}

	public IEnumerator GetTrail(string name){

		StringBuilder query = new StringBuilder(getTrailUrl);
		query.Append(name);

		String prequery = query.ToString();
		prequery.Replace(' ', '-');

		using (WWW www = new WWW (prequery))
		{
			yield return www;
			if(www.error != null)
				yield return www.error + ". Get unsuccessful";
			else 
				yield return www.text;
		}
	}

	public IEnumerator GetTrails(double lon, double lat, int miles){
		StringBuilder query = new StringBuilder(getTrailsUrl);

		query.Append("/" + lat.ToString() + "/" + lon.ToString() + "/" + miles.ToString());

		using (WWW www = new WWW (query.ToString()))
		{
			yield return www;
			if(www.error != null)
				yield return www.error + ". Get unsuccessful";
			else 
				yield return www.text;
		}
	}


	public IEnumerator GetAnnotation()
	{
		using (WWW www = new WWW (getAnnotationUrl))
		{
			yield return www;
			if(www.error != null)
				yield return www.error + ". Get unsuccessful";
			else
				yield return www.text;
		}
	}

	public IEnumerator GetFeaturesAtLocation(Vector2 latLong)
	{
		getFeaturesUrl = getFeaturesUrl + latLong.x.ToString() + "," + latLong.y.ToString() + accesKeyMapBox;
//		Debug.Log ("Now sending API request");
//		Debug.Log (getFeaturesUrl);
		using (WWW www = new WWW (getFeaturesUrl))
		{
			yield return www;
			if (www.error != null) {
				Debug.Log ("Data retrieval unsuccessful");
				yield return www.error + ". Data retrieval unsuccessful";
			} else {
//				Debug.Log (www.text);
//				print (www.text);
				yield return www.text;
			}
		}
	}

	void Start () 
	{
		Instance = this;
		DontDestroyOnLoad (gameObject);

		StartCoroutine(GetFeaturesAtLocation (testLocation));

	}
	
	// Update is called once per frame
	void Update () {
		
	}
}

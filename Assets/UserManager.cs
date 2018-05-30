using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using SimpleJSON;


public class UserManager : MonoBehaviour {

	public GameObject loadingObject;
	private LoadingScript loadingManager;
	//Fields used to either sign up or log in
	public InputField username;
	public InputField password;

	public Button loginButton;
	public Button signUpButton;

	//wwwHandler
	public GameObject wwwHandler;
	private WWWHandler wwwScript;

	void Start () {
		if (wwwHandler != null) {
			wwwScript = (WWWHandler)wwwHandler.gameObject.GetComponent(typeof(WWWHandler));
		}
		if (loadingObject != null) {
			loadingManager = (LoadingScript)loadingObject.gameObject.GetComponent (typeof(LoadingScript));
		}
		signUpButton.onClick.AddListener(onSignUp);
		loginButton.onClick.AddListener (onSignIn);
	}

	public void onSignIn(){
		StartCoroutine(signIn());
	}

	public void onSignUp() {
		StartCoroutine (signUp ());
	}

	public IEnumerator signUp() {
		CoroutineWithData result = new CoroutineWithData(this, wwwScript.PostSignUp(username.text, password.text));
		yield return result.coroutine;
		JSONNode parsedAnnotation = JSON.Parse (result.result.ToString());
		authenticate (parsedAnnotation ["token"].ToString ());
	}

	public IEnumerator signIn() {
		CoroutineWithData result = new CoroutineWithData(this, wwwScript.PostSignIn(username.text, password.text));
		yield return result.coroutine;
		JSONNode parsedAnnotation = JSON.Parse (result.result.ToString());
		authenticate (parsedAnnotation ["token"].ToString ());
	}

	private void disableLoginUI() {
		username.gameObject.SetActive (false);
		password.gameObject.SetActive (false);
		loginButton.gameObject.SetActive (false);
		signUpButton.gameObject.SetActive (false);
	}

	public void authenticate(string token){
		if (token != null) {
			GlobalUserManager.Instance.username = username.text;
			GlobalUserManager.Instance.setToken(token);
			disableLoginUI ();
			loadingManager.isAuthenticated = true;
		}
	}
}

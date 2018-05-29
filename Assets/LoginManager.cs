using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using SimpleJSON;

public class LoginManager : MonoBehaviour {
    //LoginHandler
    //  public GameObject loginObject;
    //  private LoginHandler loginHandler;
    public Button loginButton;
    // Log in and Sign up
    public InputField usernameValue;
    public InputField PasswordValue;

    //wwwHandler
    public GameObject wwwHandler;
    private WWWHandler wwwScript;
	// Use this for initialization
	void Start () {
        if (wwwHandler != null)
        {
            wwwScript = (WWWHandler)wwwHandler.gameObject.GetComponent(typeof(WWWHandler));
        }
        loginButton.onClick.AddListener(signInSubmit);
	}
	
	// Update is called once per frame
	void Update () {
        loginButton.onClick.AddListener(signInSubmit);

	}
    public void signInSubmit()
    {
        Debug.Log("Got Here");
        StartCoroutine(wwwScript.PostSignIn(usernameValue.text, PasswordValue.text));
    }
}

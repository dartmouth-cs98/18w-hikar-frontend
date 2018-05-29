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
    public Button SignUpButton;
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
        SignUpButton.onClick.AddListener(signUpSwitch);
	}
	
	// Update is called once per frame
	void Update () {
        loginButton.onClick.AddListener(signInSubmit);
        SignUpButton.onClick.AddListener(signUpSwitch);

	}
    public void signInSubmit()
    {
        Debug.Log("Sending username and password to backened");
        StartCoroutine(wwwScript.PostSignIn(usernameValue.text, PasswordValue.text));
        // TODO
        // add success check // switch to topo scene
        // also need to add text that only displays on failure
    }
    public void signUpSwitch()
    {
        Debug.Log("Trying to switch to SignUpScene");
        UnityEngine.SceneManagement.SceneManager.LoadScene(sceneName: "SignUpScene");
    }
}

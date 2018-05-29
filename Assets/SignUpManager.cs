using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using SimpleJSON;

public class SignUpManager : MonoBehaviour {
    //LoginHandler
    //  public GameObject loginObject;
    //  private LoginHandler loginHandler;
    public Button signUpButton;
    // Log in and Sign up
    public InputField usernameValue;
    public InputField PasswordValue;

    //wwwHandler
    public GameObject wwwHandler;
    private WWWHandler wwwScript;
    // Use this for initialization
	// Use this for initialization
	void Start () {
        if (wwwHandler != null)
        {
            wwwScript = (WWWHandler)wwwHandler.gameObject.GetComponent(typeof(WWWHandler));
        }
        signUpButton.onClick.AddListener(signUpSubmit);
	}
	
    // Update is called once per frame
    void Update()
    {
        signUpButton.onClick.AddListener(signUpSubmit);

    }
    public void signUpSubmit()
    {
        Debug.Log("Registering username and password");
        StartCoroutine(wwwScript.PostSignUp(usernameValue.text, PasswordValue.text));
    }
}

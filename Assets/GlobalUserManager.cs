using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Class to transfer user data (mostly login name)
//Adapted code from https://www.sitepoint.com/saving-data-between-scenes-in-unity/
public class GlobalUserManager : MonoBehaviour {

	public static GlobalUserManager Instance;
	public string username;

	void Awake ()   
	{
		if (Instance == null)
		{
			DontDestroyOnLoad(gameObject);
			Instance = this;
		}
		else if (Instance != this)
		{
			Destroy (gameObject);
		}
	}
}
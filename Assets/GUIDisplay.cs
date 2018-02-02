using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GUIDisplay : MonoBehaviour {

	public GUISkin GUISkinHelloWorld;

	// Use this for initialization
	void OnGUI () {

		GUI.skin = GUISkinHelloWorld;

		GUILayout.Button ("Hello World");

	}
	

}

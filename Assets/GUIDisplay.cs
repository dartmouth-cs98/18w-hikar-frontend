using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GUIDisplay : MonoBehaviour {

	GUISkin GUISkinHelloWorld;

	// Use this for initialization
	void OnGUI () {

		GUI.skin = GUISkinHelloWorld;

		GUILayout.Button ("Hello World");

	}
	

}

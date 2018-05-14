using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraHandler : MonoBehaviour {

	//Cameras
	public Camera ARCam;
	public Camera HUDCam;
	public Camera Cam2D;
	public Camera SearchCam;
	public Camera LoginCam;
	public Camera DayCam;
	public Camera EveningCam;
	public Camera NightCam;


	//Touch Capture
	private Rect HUDRect = new Rect (Screen.width * 0.7f, Screen.height * 0.7f, Screen.width * 0.25f, Screen.height * 0.2f);
	private GameObject touchText;

	//UI Object
	public GameObject UIObject;
	private UIManager UIManagerObject;


	// Use this for initialization
	void Start () {
		
		// Retrieve the UI Manager
		if(UIObject != null) {
			UIManagerObject = (UIManager) UIObject.gameObject.GetComponent(typeof(UIManager));
		}

		touchText = GameObject.FindGameObjectWithTag ("touchText");
		Cam2D.transform.eulerAngles = new Vector3 (90, 0, 0);
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.touchCount > 0 && HUDRect.Contains (Input.GetTouch (0).position)) {
			expand2D (true);
			UIManagerObject.enable2D (true);
		}
	}

	public void expand2D(bool expand){
		//Switch cameras
		if (expand) {
			HUDCam.depth = 0;
			Cam2D.depth = 2;
		} else {
			HUDCam.depth = 2;
			Cam2D.depth = 0;
			ARCam.depth = 1;
		}
	}

	public void enableSearchMap(){
		SearchCam.depth = 3; //highest depth in scene
	}

	public void enableBackgroundTime()
	{
		int time = (int)DateTime.Now.Hour;
		if (time > 6 && time < 16)
			DayCam.depth = 3;
		else if (time >= 16 && time < 20)
			EveningCam.depth = 3;
		else
			NightCam.depth = 3;
	}

	public void enableLogin() {
		LoginCam.depth = 5;
	}

	public void resetCams()
	{
		SearchCam.depth = -1;
		DayCam.depth = -1;
		EveningCam.depth = -1;
		NightCam.depth = -1;
		HUDCam.depth = -1;
		Cam2D.depth = -1;
		ARCam.depth = -1;
		LoginCam.depth = -1;
	}
}

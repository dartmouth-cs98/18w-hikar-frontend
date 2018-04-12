using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraHandler : MonoBehaviour {

	//Cameras
	public Camera ARCam;
	public Camera HUDCam;
	public Camera Cam2D;
	public Camera SearchCam;
//	public Camera ExploreCam;
	public Camera PlacesCam;


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
		if (Input.touchCount > 0) {
			if (HUDRect.Contains (Input.GetTouch (0).position)) {
				touchText.GetComponent<UnityEngine.UI.Text> ().text = Input.GetTouch (0).position.ToString ();
				expand2D (true);
				UIManagerObject.enable2D (true);
			} else {
				touchText.GetComponent<UnityEngine.UI.Text> ().text = HUDRect.width.ToString() + " " + HUDRect.height.ToString();
			}
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

	public void toggleSearchMap(bool showSearchMap){
		if(showSearchMap == false)
			SearchCam.depth = 3; //highest depth in scene
	}

//	public void enableExplore()
//	{
//		ExploreCam.depth = 3;
//	}

	public void enablePlaces()
	{
		PlacesCam.depth = 3;
	}

	public void resetCams()
	{
//		ExploreCam.depth = -1;
//		SearchCam.depth = -1;
		PlacesCam.depth = -1;
		HUDCam.depth = -1;
		Cam2D.depth = -1;
		ARCam.depth = -1;
	}
}

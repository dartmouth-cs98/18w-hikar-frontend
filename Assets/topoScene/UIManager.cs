using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class UIManager : MonoBehaviour {

	//TODO: populate list of trails with WWW call
	private string[] trails;

	
	private bool showForm = false;
	private bool Mode2D = false;
	private string annotationText = "";
	private string searchText = "";

	//Annotation UI
	public Button createAnnotationButton;
	public Button submitAnnotationButton;
	public InputField annotationInput;

	//2D UI
	public Button submitSearch;
	public InputField searchInput;

	//wwwHandler
	public GameObject wwwHandler;
	private WWWHandler wwwScript;

	//locationManager
	public GameObject locationManagerObject;
	private LocationHandler locationHandler;

	//cameraManager
	public GameObject cameraObject;
	private CameraHandler cameraHandler;

	void Start () {
		annotationInput.gameObject.SetActive (false);
		//searchInput.gameObject.SetActive(false);
	}
		
	void Update(){
	}

	// When annotation button is clicked
	public void onClickAnnotation()
	{
		if (!showForm) {
			annotationInput.gameObject.SetActive (true);
			showForm = true;
		} else if (showForm) {
			annotationInput.gameObject.SetActive (false);
			showForm = false;
		}
	}

	public void onClickSearch()
	{
		// Retrieve the camera object
		if(cameraObject != null) {
			cameraHandler = (CameraHandler) cameraObject.gameObject.GetComponent(typeof(CameraHandler));
		}
		enable2D (false);
		cameraHandler.expand2D (false);
	}

	public void onAnnotationSubmit()
	{
		if (annotationInput.text != "") {
			createAnnotation (annotationText);
			sendAnnotation (annotationText);
		}
		annotationInput.gameObject.SetActive (false);
		showForm = false;
	}
		

	// Use this for initialization
	private void sendAnnotation (string text) {
		//get reference to WWWHandler and get server data and parse it
		wwwScript = (WWWHandler) wwwHandler.gameObject.GetComponent(typeof(WWWHandler));

		if(locationManagerObject != null){
			locationHandler = (LocationHandler)locationManagerObject.GetComponent(typeof(LocationHandler));
		}
			
		string type = "Billboard";
		float lat = locationHandler.latitude;
		float lon = locationHandler.longitude;
//		print (type + text + lat + lon);
		wwwScript.PostAnnotation (type, text, lat, lon);
	}


	public void createAnnotation(string text){

		Transform cam = UnityEngine.Camera.main.transform;

		GameObject billboard = Instantiate(GameObject.FindGameObjectWithTag("billboardObject"));
		billboard.GetComponentInChildren<TextMesh>().text = text;
		billboard.transform.position = cam.forward * 10;
		//Vector3 lookAt = new Vector3(cam.transform.position.x, 1, cam.transform.position.z);
		//billboard.transform.LookAt(lookAt);
	}
		
	public void enable2D(bool enabled)
	{
		//Disable all other UI elements except search bar
		if (enabled) {
			annotationInput.gameObject.SetActive (false);
			createAnnotationButton.gameObject.SetActive (false);

			//Enable searchbar
			searchInput.gameObject.SetActive (true);

		} else {
			createAnnotationButton.gameObject.SetActive (true);
			//searchInput.gameObject.SetActive (false);
		}	
	}
	public void onValueChangedAnnotation(string annotation)
	{
		annotationText = annotation;
	}

	public void onValueChangedSearch(string search)
	{
//		for (int i = 0; i < trails.Length; i++) {
//			if (string.IsNullOrEmpty (searchText) || trails [i].Contains (searchText)) {
//				GUILayout.Button (trails [i]);
//			}
//		}
	}


}

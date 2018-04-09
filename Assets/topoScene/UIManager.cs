using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class UIManager : MonoBehaviour {

	//TODO: populate list of trails with WWW call
	private List<string> trails;
	
	private bool showForm = false;
	private bool Mode2D = false;
	private string annotationText = "";
	private string searchText = "";
	private List<GameObject> resultList;
	private GameObject result;

	//Annotation UI
	public Camera arCam;
	public Button createAnnotationButton;
	public Button submitAnnotationButton;
	public InputField annotationInput;

	//2D UI
	public Button submitSearch;
	public InputField searchInput;
	public ScrollRect scrollView;

	//wwwHandler
	public GameObject wwwHandler;
	private WWWHandler wwwScript;

	//cameraManager
	public GameObject cameraObject;
	private CameraHandler cameraHandler;

	void Start () {
		result = new GameObject ();
		resultList = new List<GameObject> ();
		//DEBUG
		trails = new List<string>();

		trails.Add("hey trail");
		trails.Add("heyy trail");
		trails.Add("trail this string");
		trails.Add("$that string");


		scrollView.gameObject.SetActive (false);
		annotationInput.gameObject.SetActive (false);
	}
		
	void Update()
	{
		if (scrollView.gameObject.activeSelf && scrollView.content.childCount > 0) {
			if (Input.touchSupported && Application.platform != RuntimePlatform.WebGLPlayer && Input.touchCount > 0) {
				PointerEventData pointerData = new PointerEventData(EventSystem.current);
				pointerData.position = Input.GetTouch(0).position;
				List<RaycastResult> hits = new List<RaycastResult>();
				EventSystem.current.RaycastAll(pointerData, hits);
				Debug.Log (hits.Count);
				if (hits.Count > 0) {
					Debug.Log (hits[0].gameObject.GetComponent<Text>().text);
					if (hits [0].gameObject.GetComponent<Text> ().text != "Submit") {
						//Do the things here
						scrollView.gameObject.SetActive (false);
					}
				} else {
					Debug.Log ("No GUI element detected");
				}
			}
//			if (Input.GetMouseButtonDown(0) || Input.GetMouseButtonDown(1))
//			{
//				PointerEventData pointerData = new PointerEventData(EventSystem.current);
//				pointerData.position = Input.mousePosition;
//				List<RaycastResult> hits = new List<RaycastResult>();
//				EventSystem.current.RaycastAll(pointerData, hits);
//		
//				if (hits.Count > 0) {
//					try {
//						//Transport camera to selected trail HERE
//						Text selected = hits[0].gameObject.GetComponent<Text>();
//						Debug.Log (selected.text);	
//						scrollView.gameObject.SetActive (false);
//					} catch {
//						Debug.Log ("nope");
//						scrollView.gameObject.SetActive (false);
//					}
//				} else {
//					print (":(");
//				}
//			}
		}
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
		string type = "Billboard";
		float lat = Input.location.lastData.latitude;
		float lon = Input.location.lastData.longitude;
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
		}	
	}
		
	public void onValueChangedAnnotation(string annotation)
	{
		annotationText = annotation;
	}
		

	public void onValueChangedSearch()
	{
		//Clear the list
		for(int i = 0; i < resultList.Count; i++)
		{
			Object.Destroy (resultList [i]);
		}
		resultList.Clear ();
		if (scrollView.gameObject.activeSelf) {
			scrollView.gameObject.SetActive (false);
		} else {
			scrollView.gameObject.SetActive (true);
			GameObject results = GameObject.FindGameObjectWithTag ("results");
			for (int i = 0; i < trails.Count; i++) {
				if (string.IsNullOrEmpty (searchInput.text) || trails [i].Contains (searchInput.text)) {
					GameObject tempResult = (GameObject)Instantiate (result, results.transform);
					tempResult.layer = 5;
					RectTransform tempRect = tempResult.AddComponent<RectTransform>();
					tempRect.sizeDelta = new Vector2 (600, 40);
					//Add text
					Text text = tempResult.AddComponent<Text> ();
					text.font = Resources.GetBuiltinResource(typeof(Font), "Arial.ttf") as Font;
					text.fontSize = 35;
					text.color = Color.blue;
					text.text = trails [i];
					resultList.Add (tempResult);
				}
			}
		}
	}
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class UIManager : MonoBehaviour {

	//TODO: populate list of trails with WWW call
	private List<string> trails;
	private Mapbox.Utils.Vector2d[] trailHeads;
	private Hashtable trailTable;
	
	private bool showForm = false;
	private bool Mode2D = false;
	private bool showSearchMap = false;

	private string annotationText = "";
	private string searchText = "";
	private List<GameObject> resultList;
	private GameObject result;

	//Annotation UI
	public Camera arCam;
	public Camera searchCam;

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

		trails.Add("Norwich Trail");
		trails.Add("Lebanon Trail");
		trails.Add("West Lebanon Trail");
		trails.Add("Etna Trail");

		//make 4 coordinates in the region
		//vec2ds
		Mapbox.Utils.Vector2d loc1 = new Mapbox.Utils.Vector2d(43.712967, -72.308092); //norwich
		Mapbox.Utils.Vector2d loc2 = new Mapbox.Utils.Vector2d(43.641690, -72.250757); //lebanon
		Mapbox.Utils.Vector2d loc3 = new Mapbox.Utils.Vector2d(43.642187, -72.309465); //west lebanon
		Mapbox.Utils.Vector2d loc4 = new Mapbox.Utils.Vector2d(43.691168, -72.220568); //etna


		//add vec2ds
		trailHeads = new Mapbox.Utils.Vector2d[]{loc1, loc2, loc3, loc4};

		//add trail name and vec2d
		trailTable = new Hashtable();
		trailTable.Add("Norwich Trail", loc1);
		trailTable.Add("Lebanon Trail", loc2);
		trailTable.Add("West Lebanon Trail", loc3);
		trailTable.Add("Etna Trail", loc4);


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
						string resultText = hits[0].gameObject.GetComponent<Text>().text;
						Debug.Log (resultText);
						if (resultText != "Submit") {
						//Do the things here
						//get drop down clicking working ### josh 
						scrollView.gameObject.SetActive (false);

						
						//search database for trail name
						//get trail head node location
						//reload search map with trail head location
						//change camera to search map

						Mapbox.Utils.Vector2d searchLoc = (Mapbox.Utils.Vector2d)trailTable[resultText];
						Debug.Log(searchLoc.ToString());
						SearchMap searchMap = GameObject.FindGameObjectWithTag("SearchMapObject").GetComponent<SearchMap>();
						searchMap.searchForLocation(searchLoc);

						toggleSearchMap(); //show search map if not currently showing

					}
				} else {
					Debug.Log ("No GUI element detected");
				}
			}
			if (Input.GetMouseButtonDown(0) || Input.GetMouseButtonDown(1))
			{
				PointerEventData pointerData = new PointerEventData(EventSystem.current);
				pointerData.position = Input.mousePosition;
				List<RaycastResult> hits = new List<RaycastResult>();
				EventSystem.current.RaycastAll(pointerData, hits);
		
				if (hits.Count > 0) {
					try {
						//Transport camera to selected trail HERE
						string resultText = hits[0].gameObject.GetComponent<Text>().text;
						Debug.Log (resultText);	
						scrollView.gameObject.SetActive (false);

						Mapbox.Utils.Vector2d searchLoc = (Mapbox.Utils.Vector2d)trailTable[resultText];
						Debug.Log(searchLoc.ToString());
						SearchMap searchMap = GameObject.FindGameObjectWithTag("SearchMapObject").GetComponent<SearchMap>();
						searchMap.searchForLocation(searchLoc);

						toggleSearchMap(); //show search map if not currently showing

					} catch {
						Debug.Log ("nope");
						scrollView.gameObject.SetActive (false);
					}
				} else {
					print (":(");
				}
			}
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

	public void toggleSearchMap(){
		if(showSearchMap == false){
			searchCam.depth = 3; //highest depth in scene
			showSearchMap = true;
		} else {
			searchCam.depth = -1; //lowest depth
			showSearchMap = false;
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
        		// checking trails agaist search input 
				if (string.IsNullOrEmpty (searchInput.text) || trails [i].Contains (searchInput.text)) {
					GameObject tempResult = (GameObject)Instantiate (result, results.transform);
					tempResult.layer = 5;
					RectTransform tempRect = tempResult.AddComponent<RectTransform> ();
					tempRect.sizeDelta = new Vector2 (600, 40);
					//Add text
					Text text = tempResult.AddComponent<Text> ();
					text.font = Resources.GetBuiltinResource (typeof(Font), "Arial.ttf") as Font;
					text.fontSize = 35;
					text.color = Color.blue;
					text.text = trails [i];
					resultList.Add (tempResult);
				}
			}
		}    
	}
}

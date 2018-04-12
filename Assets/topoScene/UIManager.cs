using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class UIManager : MonoBehaviour {

	//TODO: populate list of trails with WWW call

	//Trail UI + Setup
	private List<string> trails;
	private int radius = 5;
	private Mapbox.Utils.Vector2d[] trailHeads;
	private Hashtable trailTable;
	private bool showForm = false;
	private bool showSearchMap = false;
	private List<GameObject> resultList;
	private GameObject result;
	public Button hikeButton;

	//Explore UI
	private bool explore = false;
	private List<GameObject> topTrails;
	public GameObject topTrailsPanel;


	//Annotation UI
	public Button createAnnotationButton;
	public Button submitAnnotationButton;
	public InputField annotationInput;

	//2D UI
	public InputField searchInput;
	public ScrollRect scrollView;
	public Button toggleARButton;

	//wwwHandler
	public GameObject wwwHandler;
	private WWWHandler wwwScript;

	//cameraHandler
	public GameObject cameraObject;
	private CameraHandler cameraHandler;

	//menuHandler
	public GameObject menuObject;
	private MenuScript menuHandler;

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
		if(cameraObject != null) {
			cameraHandler = (CameraHandler) cameraObject.gameObject.GetComponent(typeof(CameraHandler));
		}
		if(menuObject != null) {
			menuHandler = (MenuScript) menuObject.gameObject.GetComponent(typeof(MenuScript));
		}
	}
		
	void Update()
	{
		if (scrollView.gameObject.activeSelf && scrollView.content.childCount > 0) {
			if (Input.touchSupported && Application.platform != RuntimePlatform.WebGLPlayer && Input.touchCount > 0) {
				PointerEventData pointerData = new PointerEventData(EventSystem.current);
				pointerData.position = Input.GetTouch(0).position;
				List<RaycastResult> hits = new List<RaycastResult>();
				EventSystem.current.RaycastAll(pointerData, hits);
				if (hits.Count > 0) {
					string resultText = hits[0].gameObject.GetComponent<Text>().text;
					if (resultText != "Submit") { 
						scrollView.gameObject.SetActive (false);

						
						//search database for trail name
						//get trail head node location
						//reload search map with trail head location
						//change camera to search map

						Mapbox.Utils.Vector2d searchLoc = (Mapbox.Utils.Vector2d)trailTable[resultText];
						Debug.Log(searchLoc.ToString());
						SearchMap searchMap = GameObject.FindGameObjectWithTag("SearchMapObject").GetComponent<SearchMap>();
						searchMap.searchForLocation(searchLoc);

						cameraHandler.toggleSearchMap (showSearchMap); //show search map if not currently showing
						hikeButton.gameObject.SetActive (true);
						showSearchMap = !showSearchMap;
					}
				}
			}
			if (Input.GetMouseButtonDown(0) || Input.GetMouseButtonDown(1))
			{
				PointerEventData pointerData = new PointerEventData(EventSystem.current);
				pointerData.position = Input.mousePosition;
				List<RaycastResult> hits = new List<RaycastResult>();
				EventSystem.current.RaycastAll(pointerData, hits);
		
				if (hits.Count > 0) {
					string resultText = hits [0].gameObject.GetComponent<Text> ().text;
					if (resultText != "Submit") { 
						scrollView.gameObject.SetActive (false);


						//search database for trail name
						//get trail head node location
						//reload search map with trail head location
						//change camera to search map

						Mapbox.Utils.Vector2d searchLoc = (Mapbox.Utils.Vector2d)trailTable [resultText];
						Debug.Log (searchLoc.ToString ());
						SearchMap searchMap = GameObject.FindGameObjectWithTag ("SearchMapObject").GetComponent<SearchMap> ();
						searchMap.searchForLocation (searchLoc);

						cameraHandler.toggleSearchMap (showSearchMap); //show search map if not currently showing
						hikeButton.gameObject.SetActive (true);
						showSearchMap = !showSearchMap;
					}
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
	}

	public void onAnnotationSubmit()
	{
		if (annotationInput.text != "") {
			createAnnotation (annotationInput.text);
			sendAnnotation (annotationInput.text);
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

	public void disable2D()
	{
		enable2D (false);
	}
		
	public void enable2D(bool enabled)
	{
		//Disable all other UI elements except search bar
		if (enabled) {
			annotationInput.gameObject.SetActive (false);
			createAnnotationButton.gameObject.SetActive (false);
			searchInput.gameObject.SetActive (true);
			cameraHandler.expand2D (true);
			toggleARButton.gameObject.SetActive (true);
		} else {
			createAnnotationButton.gameObject.SetActive (true);
			cameraHandler.expand2D (false);
			toggleARButton.gameObject.SetActive (false);
		}	
	}

	public void enablePlaces()
	{
		topTrailsPanel.gameObject.SetActive (true);
		cameraHandler.enablePlaces ();
	}
		
	public void resetUI()
	{
		annotationInput.gameObject.SetActive (false);
		createAnnotationButton.gameObject.SetActive (false);
		toggleARButton.gameObject.SetActive (false);
		topTrailsPanel.gameObject.SetActive (false);
		searchInput.gameObject.SetActive (false);
	}

	public void userSelection()
	{
		if (Input.touchSupported && Application.platform != RuntimePlatform.WebGLPlayer && Input.touchCount > 0) {
			PointerEventData pointerData = new PointerEventData (EventSystem.current);
			pointerData.position = Input.GetTouch (0).position;
			List<RaycastResult> hits = new List<RaycastResult> ();
			EventSystem.current.RaycastAll (pointerData, hits);
			if (hits.Count > 0 && hits [0].gameObject.GetComponent<Text> ().text != null) {
				//Reset all cams
				cameraHandler.resetCams();
				resetUI ();
				string hit = hits [0].gameObject.GetComponent<Text> ().text;
				if(hit != null){
					if (hit == "Map") {
						enable2D (true);
					}
					else if (hit == "Explore") {
						//get player location in lat long
						float plusMinus = radius/69f;
						//enableExplore (true);
					} else if (hit == "Your Places") {
						enablePlaces ();
						Debug.Log ("Places");

					} else if (hit == "Settings") {
						Debug.Log ("Settings");

					} else if (hit == "Logout") {
						Debug.Log ("Logout");
					}
				}
			}
		}
		if (Input.GetMouseButtonDown(0) || Input.GetMouseButtonDown(1))
		{
			PointerEventData pointerData = new PointerEventData(EventSystem.current);
			pointerData.position = Input.mousePosition;
			List<RaycastResult> hits = new List<RaycastResult>();
			EventSystem.current.RaycastAll(pointerData, hits);

			if (hits.Count > 0 && hits [0].gameObject.GetComponent<Text> ().text != null) {
				//Reset all cams
				cameraHandler.resetCams();
				resetUI ();
				string hit = hits [0].gameObject.GetComponent<Text> ().text;
				if (hit == "Map") {
					enable2D (true);
				}
				else if (hit == "Explore") {
					//get player location in lat long
					float plusMinus = radius/69f;
//					enableExplore (true);
				} else if (hit == "Your Places") {
					enablePlaces ();
				} else if (hit == "Settings") {
					Debug.Log ("Settings");

				} else if (hit == "Logout") {
					Debug.Log ("Logout");
				}
				if (hit != null)
					menuHandler.CloseMenu ();
			}
		}
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

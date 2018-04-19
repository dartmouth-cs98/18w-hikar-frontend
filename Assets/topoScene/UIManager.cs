using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class UIManager : MonoBehaviour {

	//Setup
	private Mapbox.Utils.Vector2d[] trailHeads;
	private Hashtable trailTable;
	private bool showForm = false;
	private bool showSearchMap = false;
	private List<GameObject> resultList;
	private GameObject result;
<<<<<<< HEAD

	//Trail UI + Setup
	private List<string> trails;
	private string currentSelectedTrail;
=======
>>>>>>> parent of 3edef45... Merge branch 'master' of https://github.com/dartmouth-cs98/18w-hikar-frontend
	public Button hikeButton;

	//Explore UI
	private List<string[]> nearbyTrails;
	private List<string> trailNames;
	private bool explore = false;
	public GameObject exploreTrailsPanel;

	//Your Places UI
	private List<string[]> topTrails;
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
		nearbyTrails = new List<string[]> ();
		topTrails = new List<string[]> ();
		trailNames = new List<string> ();
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
				if (hits.Count > 0 && hits [0].gameObject.GetComponent<Text> ().text != null) {
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
				if (hits.Count > 0 && hits [0].gameObject.GetComponent<Text> ().text != null) {
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
<<<<<<< HEAD
						currentSelectedTrail = resultText;
						searchInput.text = "";
=======
						showSearchMap = !showSearchMap;
>>>>>>> parent of 3edef45... Merge branch 'master' of https://github.com/dartmouth-cs98/18w-hikar-frontend
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
			toggleARButton.gameObject.SetActive (true);
		} else {
			createAnnotationButton.gameObject.SetActive (true);
			toggleARButton.gameObject.SetActive (false);
		}	
		cameraHandler.expand2D (enabled);
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
		exploreTrailsPanel.gameObject.SetActive (false);
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
				if (hit != null) {
					if (hit == "Map") {
						enable2D (true);
					} else if (hit == "Explore") {
						populateExplore ();
						cameraHandler.enableBackgroundTime ();
					} else if (hit == "Your Places") {
						enablePlaces ();
						cameraHandler.enableBackgroundTime ();
					} else if (hit == "Settings") {
						Debug.Log ("Settings");

					} else if (hit == "Logout") {
						Debug.Log ("Logout");
					}
<<<<<<< HEAD
					menuHandler.CloseMenu ();
=======
>>>>>>> parent of 3edef45... Merge branch 'master' of https://github.com/dartmouth-cs98/18w-hikar-frontend
				}
			}
		}
		if (Input.GetMouseButtonDown(0) || Input.GetMouseButtonDown(1))
		{
			PointerEventData pointerData = new PointerEventData(EventSystem.current);
			pointerData.position = Input.mousePosition;
			List<RaycastResult> hits = new List<RaycastResult>();
			EventSystem.current.RaycastAll(pointerData, hits);
			if (hits.Count > 0 && hits [0].gameObject.GetComponent<Text> () != null) {
				//Reset all cams
				cameraHandler.resetCams();
				resetUI ();
				string hit = hits [0].gameObject.GetComponent<Text> ().text;
<<<<<<< HEAD
				if (hit != null) {
					if (hit == "Map") {
						enable2D (true);
					} else if (hit == "Explore") {
						populateExplore ();
						cameraHandler.enableBackgroundTime ();
					} else if (hit == "Your Places") {
						enablePlaces ();
						cameraHandler.enableBackgroundTime ();
					} else if (hit == "Settings") {
						Debug.Log ("Settings");

					} else if (hit == "Logout") {
						Debug.Log ("Logout");
					}
=======
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
>>>>>>> parent of 3edef45... Merge branch 'master' of https://github.com/dartmouth-cs98/18w-hikar-frontend
					menuHandler.CloseMenu ();
				}
					
			}
		}
	}

	public void clearResults()
	{
		//Clear the list
		for(int i = 0; i < resultList.Count; i++)
		{
			Object.Destroy (resultList [i]);
		}
		resultList.Clear ();
	}
		

	public void onValueChangedSearch()
	{
		clearResults ();
		scrollView.gameObject.SetActive (true);
		GameObject results = GameObject.FindGameObjectWithTag ("results");
		for (int i = 0; i < trails.Count; i++) {
    		// checking trails agaist search input 
			if (string.IsNullOrEmpty (searchInput.text) || trails [i].ToLower().Contains (searchInput.text.ToLower())) {
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

	public void populateNearby(string trailName, string trailDist){
		string[] trail = new string[2];
		trail [0] = trailName.Replace("\"" , "");
		trail [1] = trailDist.ToString ();
		nearbyTrails.Add (trail);
	}

	public void populateExplore(){
		clearResults ();
		exploreTrailsPanel.gameObject.SetActive (true);
		nearbyTrails.Sort ((t1, t2) => float.Parse(t1 [1]).CompareTo (float.Parse(t2 [1])));
		for (int i = 0; i < nearbyTrails.Count; i++) {
			if (!trailNames.Contains (nearbyTrails [i] [0]))
				trailNames.Add (nearbyTrails [i] [0]);
			else
				nearbyTrails.RemoveAt (i);
		}
		trailNames.Clear ();
		for (int i = 0; i < 10; i++) {
			GameObject tempResult = (GameObject)Instantiate (result, exploreTrailsPanel.transform);
			Text text = tempResult.AddComponent<Text> ();
			text.font = Resources.GetBuiltinResource (typeof(Font), "Arial.ttf") as Font;
			text.fontSize = 25;
			RectTransform tempTransform = text.GetComponent<RectTransform> ();
			tempTransform.sizeDelta = new Vector2 (400f, 100f);
			text.transform.position = new Vector3 (400f, 100f);
			text.transform.localScale = new Vector3 (0.25f, 3f, 1f);
			text.color = Color.black;
			text.text = System.String.Format("{0,-10} {1,10}", nearbyTrails [i] [0], (System.Math.Truncate(100* double.Parse(nearbyTrails [i] [1]))/100d).ToString() + " mi");
			resultList.Add (tempResult);
		}
	}
}

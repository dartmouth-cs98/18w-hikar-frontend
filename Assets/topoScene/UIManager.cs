using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using SimpleJSON;

public class UIManager : MonoBehaviour {

	//Setup
	private Mapbox.Utils.Vector2d[] trailHeads;
	private Hashtable trailTable;
	private List<GameObject> resultList;
	public GameObject searchResultObject;
	public Text errorText;
	public Text usernameText;
	public Canvas loadingCanvas;
	public JSONNode parsedUser;
	public TransitionalObject transitionHikePanel;
	public Button logoutButton;
	public Button exitHikeButton;
	public bool inAR;

	//Trail UI
	private string currentSelectedTrail;
	public Button hikeButton;
	public bool isHiking;
	public Button mapButton;

	//Explore UI
	private List<string[]> nearbyTrails;
	private List<string> trailNames;
	public GameObject explorePanelObject;
	public ScrollRect exploreScrollView;
	public Text exploreHeadingText;
	public Text exploreInstructionsText;
	public Button exploreButton;

	//Your Places UI
	private string[] topTrails;
	public GameObject topTrailsPanel;
	public GameObject trailPanelObject;
	public GameObject YourPlacesObject;
	public Button placesButton;

	//Settings UI
	public GameObject settingsPanel;
	public Slider radiusSlider;
	public Text radiusText;
	public Toggle annotationsToggle;
	public Button settingsButton;
	public InputField usernameInput;
	public RawImage ProfilePicture;

	//Annotation UI
	public Button createAnnotationButton;
	public Button submitAnnotationButton;
	public InputField annotationInput;
	public Dropdown styleDropdown;
	public Dropdown colorDropdown;

	//2D UI
	public InputField searchInput;
	public ScrollRect searchScrollView;
	public Button toggleARButton;
	public Button exitSelectionButton;

	//wwwHandler
	public GameObject wwwHandler;
	private WWWHandler wwwScript;

	//sceneHandler
	public GameObject sceneObject;
	private SceneManager sceneManager;

	//cameraHandler
	public GameObject cameraObject;
	private CameraHandler cameraHandler;

	//camera2D 
	public GameObject camera2D;
	private Mapbox.Examples.QuadTreeCameraMovement quadTreeCameraMovement;
	private Vector3 camera2Dposition;

	//menuHandler
	public GameObject menuObject;
	private MenuScript menuHandler;

	//annotationHandler
	public GameObject annotationObject;
	private AnnotationHandler annotationHandler;

	//directionHandler
	public GameObject directionsObjects;
	private DirectionsHandler directionsHandler;

	//searchDirectionHandler
	public GameObject searchDirectionsObject;
	private DirectionsHandler searchDirectionsHandler;
	public Button loginButton;

	void Start () {
		resultList = new List<GameObject> ();
		nearbyTrails = new List<string[]> ();
		trailNames = new List<string> ();
		searchScrollView.gameObject.SetActive (false);
		annotationInput.gameObject.SetActive (false);		
		if(cameraObject != null) {
			cameraHandler = (CameraHandler) cameraObject.gameObject.GetComponent(typeof(CameraHandler));
		}
		if(camera2D != null){
			quadTreeCameraMovement = (Mapbox.Examples.QuadTreeCameraMovement)camera2D.GetComponent(typeof(Mapbox.Examples.QuadTreeCameraMovement));
			quadTreeCameraMovement.enabled = false;
		}

		if(menuObject != null) {
			menuHandler = (MenuScript) menuObject.gameObject.GetComponent(typeof(MenuScript));
		}
		if(wwwHandler != null) {
			wwwScript = (WWWHandler)wwwHandler.gameObject.GetComponent(typeof(WWWHandler)); 
		}
		if (annotationObject != null) {
			annotationHandler = (AnnotationHandler)annotationObject.gameObject.GetComponent (typeof(AnnotationHandler));
		}
		if (annotationObject != null) {
			annotationHandler = (AnnotationHandler)annotationObject.gameObject.GetComponent (typeof(AnnotationHandler));
		}
		if (sceneObject != null) {
			sceneManager = (SceneManager)sceneObject.gameObject.GetComponent (typeof(SceneManager));
		}
		if (directionsObjects != null) {
			directionsHandler = (DirectionsHandler)directionsObjects.gameObject.GetComponent (typeof(DirectionsHandler));
		}
		if (searchDirectionsObject != null) {
			searchDirectionsHandler = (DirectionsHandler)searchDirectionsObject.gameObject.GetComponent (typeof(DirectionsHandler));
		}
		isHiking = false;
		StartCoroutine(initUser());
		createAnnotationButton.onClick.AddListener (onClickAnnotation);
		submitAnnotationButton.onClick.AddListener (onAnnotationSubmit);
		exitSelectionButton.onClick.AddListener (disable2D);
		hikeButton.onClick.AddListener (onHike);
		mapButton.onClick.AddListener (() => enable2D (true));
		exploreButton.onClick.AddListener (enableExplore);
		placesButton.onClick.AddListener (enablePlaces);
		settingsButton.onClick.AddListener (enableSettings);
		toggleARButton.onClick.AddListener (disable2D);
		exitHikeButton.onClick.AddListener (exitHike);
		inAR = true;
		usernameText.text = GlobalUserManager.Instance.username;
	}

	public IEnumerator initUser() {
		CoroutineWithData userData = new CoroutineWithData(this, wwwScript.GetUserInfo (GlobalUserManager.Instance.username));
		yield return userData.coroutine;
		parsedUser = SimpleJSON.JSON.Parse (userData.result.ToString());
		if (parsedUser ["radius"].AsInt != null) {
			radiusSlider.value = parsedUser ["radius"].AsInt;
		} else {
			radiusSlider.value = 50;
		}
		if (parsedUser ["toggleAnnotations"].AsBool != null) {
			annotationHandler.enableAnnotations (parsedUser ["toggleAnnotations"].AsBool);
		}
	}

	void Update() {
		if (searchScrollView.gameObject.activeSelf && searchScrollView.content.childCount > 0 || exploreScrollView.gameObject.activeSelf) {
			if (Input.touchSupported && Application.platform != RuntimePlatform.WebGLPlayer && Input.touchCount > 0) {
				PointerEventData pointerData = new PointerEventData(EventSystem.current);
				pointerData.position = Input.GetTouch(0).position;
				List<RaycastResult> hits = new List<RaycastResult>();
				EventSystem.current.RaycastAll(pointerData, hits);
				if (hits.Count > 0 && hits [0].gameObject.GetComponent<Text> () != null) {
					string resultText = hits [0].gameObject.GetComponent<Text> ().text;
					if (resultText != "Submit" && resultText != "Explore" && resultText != searchInput.text) {
						// Cancel search
						if (resultText != "_________") {
							Debug.Log (resultText);
							searchScrollView.gameObject.SetActive (false);
							SearchMap searchMap = GameObject.FindGameObjectWithTag ("SearchMap").GetComponent<SearchMap> ();
							StartCoroutine (searchMap.getTrailForLocation (wwwScript, resultText));
							searchInput.text = "";
							searchScrollView.gameObject.SetActive (false);
							trailNames.Clear ();
							cameraHandler.enableSearchMap (); //show search map if not currently showing
							hikeButton.gameObject.SetActive (true);
							currentSelectedTrail = resultText;
							createAnnotationButton.gameObject.SetActive (false);
							exitSelectionButton.gameObject.SetActive (true);
						} else {
							searchInput.text = "";
							searchScrollView.gameObject.SetActive (false);
						}
					}
				}
			}
			if (Input.GetMouseButtonDown(0) || Input.GetMouseButtonDown(1)){
				PointerEventData pointerData = new PointerEventData(EventSystem.current);
				pointerData.position = Input.mousePosition;
				List<RaycastResult> hits = new List<RaycastResult>();
				EventSystem.current.RaycastAll(pointerData, hits);
				if (hits.Count > 0 && hits [0].gameObject.GetComponent<Text> () != null) {
					string resultText = hits [0].gameObject.GetComponent<Text> ().text;
					if (resultText != "Submit" && resultText != "Explore" && resultText != searchInput.text) {
						// Cancel search
						if (resultText != "_________") {
							Debug.Log (resultText);
							searchScrollView.gameObject.SetActive (false);
							SearchMap searchMap = GameObject.FindGameObjectWithTag ("SearchMap").GetComponent<SearchMap> ();
							StartCoroutine (searchMap.getTrailForLocation (wwwScript, resultText));
							searchInput.text = "";
							searchScrollView.gameObject.SetActive (false);
							trailNames.Clear ();
							cameraHandler.enableSearchMap (); //show search map if not currently showing
							hikeButton.gameObject.SetActive (true);
							currentSelectedTrail = resultText;
							createAnnotationButton.gameObject.SetActive (false);
							exitSelectionButton.gameObject.SetActive (true);
						} else {
							searchInput.text = "";
							searchScrollView.gameObject.SetActive (false);
						}
					}
				}
			}
		}
	}

	public void onClickPanel(string trailName){
		SearchMap searchMap = GameObject.FindGameObjectWithTag ("SearchMap").GetComponent<SearchMap> ();
		StartCoroutine (searchMap.getTrailForLocation (wwwScript, trailName));
		YourPlacesObject.gameObject.SetActive (false);
		exploreScrollView.gameObject.SetActive (false);
		searchInput.text = "";
		searchInput.gameObject.SetActive (true);
		searchScrollView.gameObject.SetActive (false);
		trailNames.Clear ();
		cameraHandler.enableSearchMap (); //show search map if not currently showing
		hikeButton.gameObject.SetActive (true);
		currentSelectedTrail = trailName;
		createAnnotationButton.gameObject.SetActive (false);
		exitSelectionButton.gameObject.SetActive (true);
	}


	public void isLoading(bool enabled){
		if(enabled){
			loadingCanvas.gameObject.SetActive (true);
		} else {
			loadingCanvas.gameObject.SetActive(false);
		}
	}

	// When annotation button is clicked
	public void onClickAnnotation() {
		annotationInput.gameObject.SetActive (!annotationInput.gameObject.activeSelf);
	}

	public void onAnnotationSubmit() {
		if (annotationInput.text != "") {
			//TODO: Add switches between types of annotations
			//if billboard:

			StartCoroutine(annotationHandler.addBillboard (annotationInput.text, colorDropdown.value, styleDropdown.value));
		}
		styleDropdown.value = 0;
		colorDropdown.value = 0;
		annotationInput.text = "";
		annotationInput.gameObject.SetActive (!annotationInput.gameObject.activeSelf);
	}

	public void onHike() {
		StartCoroutine(wwwScript.UpdateUserTrail(GlobalUserManager.Instance.username, currentSelectedTrail));
		directionsHandler.getDirectionsFromSearchMap(searchDirectionsHandler.waypointList, searchDirectionsHandler.heights);
		transitionHikePanel.TriggerTransition ();
		hikeButton.gameObject.SetActive (false);
		disable2D ();
		isHiking = true;
	}

	public void exitHike() {
		isHiking = false;
		transitionHikePanel.TriggerFadeOut ();
		directionsHandler.waypointList.Clear ();
	}

	public void disable2D() {
		cameraHandler.resetCams ();
		enable2D (false);
		exitSelectionButton.gameObject.SetActive (false);
		hikeButton.gameObject.SetActive (false);
	}

	public void displayNetworkError(){
		menuHandler.OpenError ();
		errorText.gameObject.SetActive (true);
		errorText.text = "No network connection detected.";
	}

	public void enable2D(bool enabled) {
		if (enabled) {
			cameraHandler.resetCams();
			resetUI ();
			annotationInput.gameObject.SetActive (false);
			createAnnotationButton.gameObject.SetActive (false);
			searchInput.gameObject.SetActive (true);
			toggleARButton.gameObject.SetActive (true);
			inAR = false;
			menuHandler.CloseMenu ();
		} else {
			createAnnotationButton.gameObject.SetActive (true);
			toggleARButton.gameObject.SetActive (false);
			searchInput.gameObject.SetActive (false);
			inAR = true;
		}
		if (isHiking && inAR && !enabled) {
			transitionHikePanel.TriggerTransition ();
		}
		quadTreeCameraMovement.enabled = enabled;
		cameraHandler.expand2D (enabled);
	}

	public void enableExplore() {
		cameraHandler.resetCams();
		resetUI ();
		cameraHandler.enableBackgroundTime ();
		clearResults ();
		inAR = false;
		exploreScrollView.gameObject.SetActive (true);
		exploreHeadingText.gameObject.SetActive (true);
		exploreInstructionsText.gameObject.SetActive (true);
		GameObject exploreResults = GameObject.FindGameObjectWithTag ("exploreResults");
		trailNames.Clear ();
		int i = 0;
		while (i < 10 && i < nearbyTrails.Count) {
			GameObject tempPanel = (GameObject)Instantiate (explorePanelObject, exploreResults.transform);
			tempPanel.gameObject.SetActive(true);
			Text[] tempTrailInfo = tempPanel.GetComponentsInChildren<Text>();
			tempTrailInfo[0].text = nearbyTrails [i] [0].ToString();
			tempTrailInfo[1].text = (System.Math.Truncate(100* double.Parse(nearbyTrails [i] [1]))/100d).ToString() + " mi";
			Button clickPanel = tempPanel.GetComponent<Button>();
			clickPanel.onClick.AddListener(() => onClickPanel(tempTrailInfo[0].text));
			resultList.Add (tempPanel);
			i++;
		} 
		if(nearbyTrails.Count == 0) {
			displayNetworkError ();
		}
		menuHandler.CloseMenu ();
	}

	public void enablePlaces() {
		cameraHandler.resetCams();
		resetUI ();
		cameraHandler.enableBackgroundTime ();
		clearResults ();
		inAR = false;
		YourPlacesObject.gameObject.SetActive (true);
		try{
			for (int i = 0; i < parsedUser ["trailHistory"].Count; i++) {
				if (i < 5) {
					GameObject tempPanel = (GameObject)Instantiate (trailPanelObject, topTrailsPanel.transform);
					tempPanel.gameObject.SetActive(true);
					Text[] tempTrailInfo = tempPanel.GetComponentsInChildren<Text>();
					string trailName = parsedUser ["trailHistory"] [i] [0].ToString ().Replace ("\"", "");
					tempTrailInfo [0].text = i + 1 + ". " + trailName;
					tempTrailInfo [1].text = "Hiked: " + parsedUser ["trailHistory"] [i] [1].ToString ().Replace ("\"", "");
					Button clickPanel = tempPanel.GetComponent<Button>();
					clickPanel.onClick.AddListener(() => onClickPanel(trailName));
					resultList.Add (tempPanel);
				} else 
					break;
			}
		} catch {
			displayNetworkError();
		}
		menuHandler.CloseMenu ();
	}

	public void enableSettings() {
		cameraHandler.resetCams();
		resetUI ();
		inAR = false;
		cameraHandler.enableBackgroundTime ();
		settingsPanel.gameObject.SetActive (true);
		menuHandler.CloseMenu ();
	}

	public void clearDuplicateTrails(){
		nearbyTrails.Sort ((t1, t2) => float.Parse(t1 [1]).CompareTo (float.Parse(t2 [1])));
		int i = 0;
		while (trailNames.Count < 10 && i < nearbyTrails.Count) {
			if (!trailNames.Contains (nearbyTrails [i] [0])){
				trailNames.Add (nearbyTrails [i] [0]);
			} else {
				nearbyTrails.RemoveAt (i);
				i--;
			}
			i++;
		}
	}

	public void onValueChangedSearch() {
		clearResults ();
		searchScrollView.gameObject.SetActive (true);
		GameObject results = GameObject.FindGameObjectWithTag ("results");
		trailNames.Clear ();
		for (int i = 0; i < nearbyTrails.Count; i++) {
			// checking trails agaist search input 
			if (nearbyTrails [i][0].ToLower().Contains (searchInput.text.ToLower())) {
				if (!trailNames.Contains (nearbyTrails [i][0])) {
					GameObject tempResult = (GameObject)Instantiate (searchResultObject, results.transform);
					tempResult.gameObject.SetActive (true);
					Text text = tempResult.GetComponentInChildren<Text>();
					text.color = Color.blue;
					text.text = nearbyTrails [i][0];
					resultList.Add (tempResult);
					trailNames.Add (text.text);
				}
			}
		}
		if (nearbyTrails.Count == 0) {
			displayNetworkError ();
		}
	}
		

	public void resetUI() {
		annotationInput.gameObject.SetActive (false);
		createAnnotationButton.gameObject.SetActive (false);
		toggleARButton.gameObject.SetActive (false);
		searchInput.gameObject.SetActive (false);
		exploreScrollView.gameObject.SetActive (false);
		exploreHeadingText.gameObject.SetActive (false);
		exploreInstructionsText.gameObject.SetActive (false);
		YourPlacesObject.gameObject.SetActive (false);
		settingsPanel.gameObject.SetActive (false);
		errorText.gameObject.SetActive (false);
		hikeButton.gameObject.SetActive (false);
		exitSelectionButton.gameObject.SetActive (false);
		menuHandler.CloseError ();
	}

	public void userSelection() {
		if (Input.touchSupported && Application.platform != RuntimePlatform.WebGLPlayer && Input.touchCount > 0) {
			PointerEventData pointerData = new PointerEventData (EventSystem.current);
			pointerData.position = Input.GetTouch (0).position;
			List<RaycastResult> hits = new List<RaycastResult> ();
			EventSystem.current.RaycastAll (pointerData, hits);
			if (hits.Count > 0 && hits [0].gameObject.GetComponent<Text> () != null) {
				string hit = hits [0].gameObject.GetComponent<Text> ().text;
				if (hit != null && hit != "_________") {
					if (hit == "Map") {
						enable2D (true);
					} else if (hit == "Explore") {
						enableExplore ();
					} else if (hit == "Your Places") {
						enablePlaces ();
					} else if (hit == "Settings") {
						enableSettings ();
					} else if (hit == "Logout") {
						Debug.Log ("Logout");
					}
				}
			}
		}
		if (Input.GetMouseButtonDown(0) || Input.GetMouseButtonDown(1)) {
			PointerEventData pointerData = new PointerEventData(EventSystem.current);
			pointerData.position = Input.mousePosition;
			List<RaycastResult> hits = new List<RaycastResult>();
			EventSystem.current.RaycastAll(pointerData, hits);
			if (hits.Count > 0 && hits [0].gameObject.GetComponent<Text> () != null) {
				string hit = hits [0].gameObject.GetComponent<Text> ().text;
				if (hit != null && hit != "_________") {
					cameraHandler.resetCams();
					resetUI ();
					if (hit == "Map") {
						enable2D (true);
					} else if (hit == "Explore") {
						enableExplore ();
					} else if (hit == "Your Places") {
						enablePlaces ();
					} else if (hit == "Settings") {
						enableSettings ();
					} else if (hit == "Logout") {
						Debug.Log ("Logout");
					}
				}
			}
		}
	}

	public void clearResults() {
		//Clear the list
		for(int i = 0; i < resultList.Count; i++) {
			Object.Destroy (resultList [i]);
		}
		resultList.Clear ();
	}

	public void clearNearby() {
		nearbyTrails.Clear ();
	}

	public void populateNearby(string trailName, string trailDist) {
		string[] trail = new string[2];
		trail [0] = trailName.Replace("\"" , "");
		trail [1] = trailDist.ToString ();
		nearbyTrails.Add (trail);
	}

	public void setRadius() {
		radiusText.text = System.Math.Round (radiusSlider.value).ToString();
		sceneManager.updateRadius ((int)System.Math.Round (radiusSlider.value));
		sceneManager.updateNearby((int)System.Math.Round (radiusSlider.value));
		updateUserSettings ();
	}

	public void toggleAnnotations() {
		annotationHandler.enableAnnotations (annotationsToggle.isOn);
		updateUserSettings ();
	}

	public void updateUserSettings() {
		StartCoroutine(wwwScript.UpdateUserSettings(GlobalUserManager.Instance.username, radiusText.text, annotationsToggle.isOn.ToString()));
	}

	public void changeAnnotationFont() {
		Text annotation = annotationInput.GetComponentInChildren<Text> ();
		if (annotation.text != "") {
			if (styleDropdown.value == 0)
				annotation.fontStyle = FontStyle.Normal;
			else if (styleDropdown.value == 1)
				annotation.fontStyle = FontStyle.Bold;
			else if (styleDropdown.value == 2)
				annotation.fontStyle = FontStyle.Italic;
			else if (styleDropdown.value == 3)
				annotation.fontStyle = FontStyle.BoldAndItalic;
		}
	}

	public void changeAnnotationColor() {
		Text annotation = annotationInput.GetComponentInChildren<Text> ();
		if (annotation.text != "") {
			if (colorDropdown.value == 0)
				annotation.color = Color.black;
			else if (colorDropdown.value == 1)
				annotation.color = Color.red;
			else if (colorDropdown.value == 2)
				annotation.color = Color.blue;
			else if (colorDropdown.value == 3)
				annotation.color = Color.green;
		}
	}
}
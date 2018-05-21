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
	private GameObject result;
	public Text errorText;
	public Canvas loadingCanvas;
	public JSONNode parsedUser;
	public TransitionalObject transitionHikePanel;
	public Button logoutButton;

	// Log in and Sign up
	public InputField usernameValue;
	public InputField PasswordValue;

	//Trail UI
	private string currentSelectedTrail;
	public GameObject trailPanelObject;
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
	public Button placesButton;

	//Settings UI
	public GameObject settingsPanel;
	public Slider radiusSlider;
	public Text radiusText;
	public Toggle annotationsToggle;
	public Button settingsButton;

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

	//LoginHandler
	//	public GameObject loginObject;
	//	private LoginHandler loginHandler;
	public Button loginButton;

	void Start () {
		result = new GameObject ();
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
		radiusSlider.minValue = 1;
		radiusSlider.maxValue = 100;
		StartCoroutine(initUser());
		createAnnotationButton.onClick.AddListener (onClickAnnotation);
		submitAnnotationButton.onClick.AddListener (onAnnotationSubmit);
		exitSelectionButton.onClick.AddListener (disable2D);
		loginButton.onClick.AddListener (signInSubmit);
		hikeButton.onClick.AddListener (onHike);
		mapButton.onClick.AddListener (() => enable2D (true));
		exploreButton.onClick.AddListener (enableExplore);
		placesButton.onClick.AddListener (enablePlaces);
		settingsButton.onClick.AddListener (enableSettings);
	}

	public IEnumerator initUser() {
		CoroutineWithData userData = new CoroutineWithData(this, wwwScript.GetUserInfo ("User2"));
		yield return userData.coroutine;
		parsedUser = SimpleJSON.JSON.Parse (userData.result.ToString());	
		if (parsedUser ["radius"] != null) {
			radiusSlider.value = parsedUser ["radius"].AsInt;
			Debug.Log (parsedUser ["radius"].AsInt);
		}
		else
			radiusSlider.value = 50;
		if (parsedUser ["toggleAnnotations"] != null) {
			annotationsToggle.isOn = parsedUser ["toggleAnnotations"].AsBool;
			toggleAnnotations ();
		} else {
			annotationsToggle.isOn = true;
			toggleAnnotations ();
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
					Debug.Log (resultText);
					if (resultText != "Submit" && resultText != "Explore" && resultText != searchInput.text) {
						// Cancel search
						if (resultText != "_________") {
							Debug.Log (resultText);
							searchScrollView.gameObject.SetActive (false);
							SearchMap searchMap = GameObject.FindGameObjectWithTag ("SearchMap").GetComponent<SearchMap> ();
//							if (exploreScrollView.gameObject.activeSelf) {
//								string[] trailNameOnly = resultText.Split (new char[0]);
//								StringBuilder trailName = new StringBuilder ();
//								for (int i = 0; i < trailNameOnly.Length - 2; i++) {
//									if (i == 0)
//										trailName.Append (trailNameOnly [i]);
//									else
//										trailName.Append (" " + trailNameOnly [i]);
//								}
//								resultText = trailName.ToString ().Trim ();
//							}
							//Quick search function from explore page
							if (exploreScrollView.gameObject.activeSelf) {
								StartCoroutine (searchMap.getTrailForLocation (wwwScript, resultText));
								exploreScrollView.gameObject.SetActive (false);
								searchInput.text = "";
								searchInput.gameObject.SetActive (true);
							}
							//Regular search function from search bar
							else {
								StartCoroutine (searchMap.getTrailForLocation (wwwScript, resultText));
								searchInput.text = "";
								searchScrollView.gameObject.SetActive (false);
							}
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
		exploreScrollView.gameObject.SetActive (false);
		searchInput.text = "";
		searchInput.gameObject.SetActive (true);
		searchInput.text = "";
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

	public void signInSubmit(){
		Debug.Log ("Got Here");
		StartCoroutine(wwwScript.PostSignIn (usernameValue.text, PasswordValue.text));
	}

	public void onHike() {
		StartCoroutine(wwwScript.UpdateUserTrail("User2", currentSelectedTrail));
		directionsHandler.getDirectionsFromSearchMap(searchDirectionsHandler.waypointList, searchDirectionsHandler.heights);
		transitionHikePanel.TriggerTransition ();
		hikeButton.gameObject.SetActive (false);
		disable2D ();
		isHiking = true;
	}

	public void disable2D() {
		cameraHandler.resetCams ();
		enable2D (false);
		exitSelectionButton.gameObject.SetActive (false);
		hikeButton.gameObject.SetActive (false);
	}

	public void enable2D(bool enabled) {
		if (enabled) {
			cameraHandler.resetCams();
			resetUI ();
			annotationInput.gameObject.SetActive (false);
			createAnnotationButton.gameObject.SetActive (false);
			searchInput.gameObject.SetActive (true);
			toggleARButton.gameObject.SetActive (true);
			camera2Dposition = camera2D.transform.position;
			menuHandler.CloseMenu ();
		} else {
			createAnnotationButton.gameObject.SetActive (true);
			toggleARButton.gameObject.SetActive (false);
			searchInput.gameObject.SetActive (false);
			camera2D.transform.position = camera2Dposition;
		}
		quadTreeCameraMovement.enabled = enabled;
		cameraHandler.expand2D (enabled);
	}

	public void enableExplore() {
		cameraHandler.resetCams();
		resetUI ();
		cameraHandler.enableBackgroundTime ();
		clearResults ();
		exploreScrollView.gameObject.SetActive (true);
		exploreHeadingText.gameObject.SetActive (true);
		exploreInstructionsText.gameObject.SetActive (true);
		GameObject exploreResults = GameObject.FindGameObjectWithTag ("exploreResults");
		try{
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
		} catch {
			errorText.gameObject.SetActive (true);
			errorText.color = Color.red;
			errorText.text = "Error: Our servers are down for maintenance";
		}
		menuHandler.CloseMenu ();
	}

	public void enablePlaces() {
		cameraHandler.resetCams();
		resetUI ();
		cameraHandler.enableBackgroundTime ();
		clearResults ();
		topTrailsPanel.gameObject.SetActive (true);
		for (int i = 0; i < parsedUser ["trailHistory"].Count; i++) {
			try{
				if (i < 5) {
					GameObject tempPanel = (GameObject)Instantiate (trailPanelObject, topTrailsPanel.transform);
					tempPanel.gameObject.SetActive(true);
					Text[] tempTrailInfo = tempPanel.GetComponentsInChildren<Text>();
					tempTrailInfo [0].text = i + 1 + ". " + parsedUser ["trailHistory"] [i] [0].ToString ().Replace ("\"", "");
					tempTrailInfo [1].text = "Hiked: " + parsedUser ["trailHistory"] [i] [1].ToString ().Replace ("\"", "");
					Button clickPanel = tempPanel.GetComponent<Button>();
					clickPanel.onClick.AddListener(() => onClickPanel(parsedUser ["trailHistory"] [i] [0].ToString ().Replace ("\"", "")));
					resultList.Add (tempPanel);
				} else 
					break;
			} catch {
				errorText.gameObject.SetActive (true);
				errorText.color = Color.red;
				errorText.text = "Error: Our servers are down for maintenance";
			}
		}
		menuHandler.CloseMenu ();
	}

	public void enableSettings() {
		cameraHandler.resetCams();
		resetUI ();
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
					GameObject tempResult = (GameObject)Instantiate (result, results.transform);
					tempResult.layer = 5;
					RectTransform tempRect = tempResult.AddComponent<RectTransform> ();
					tempRect.sizeDelta = new Vector2 (600, 40);
					//Add text
					Text text = tempResult.AddComponent<Text> ();
					text.font = Resources.GetBuiltinResource (typeof(Font), "Arial.ttf") as Font;
					text.fontSize = 35;
					text.color = Color.blue;
					text.text = nearbyTrails [i][0];
					resultList.Add (tempResult);
					trailNames.Add (text.text);
				}
			}
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
		topTrailsPanel.gameObject.SetActive (false);
		settingsPanel.gameObject.SetActive (false);
		errorText.gameObject.SetActive (false);
		hikeButton.gameObject.SetActive (false);
		exitSelectionButton.gameObject.SetActive (false);
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
		for(int i = 0; i < resultList.Count; i++)
		{
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
		StartCoroutine(wwwScript.UpdateUserSettings("User2", radiusText.text, annotationsToggle.isOn.ToString()));
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
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mapbox.Utils;
using Mapbox.Unity.Utilities;
using Mapbox.Unity.Map;
using Mapbox.Unity.Location;
using SimpleJSON;
using Vuforia;

public class SceneManager : MonoBehaviour {

	//camera Object
	public GameObject cameraObject;

	//mapBox
	public GameObject mapObject;
	private Mapbox.Unity.Map.AbstractMap map;

	//annotationHandler
	public GameObject annotationObject;
	private AnnotationHandler annotationHandler;

	//wwwHandler
	public GameObject wwwHandler;
	private WWWHandler wwwScript;

	//directionsHandler
	public GameObject directionsObject;
	private DirectionsHandler directionHandler;

	//uiHandler
	public GameObject uiObject;
	private UIManager uiHandler;

	public GameObject playerObject;

	private GameObject cameraPosition;

	private Vector2 initialLocation; //where user is on app start
	private Vector2 currentLocation; //where user is on latest location update with test = new Vector2((float)-4, 0);
	private Vector2 lastLocation;

	public Location currentLoc;
	private Location lastLoc;

	private bool isRootTransformSet = false;

	//private Vector2 testLocaiton = new Vector2((float)43.7021, (float)72.2890); //test location

	public int zoomFactor = 16; //handles the zoom level on the map (hardcode for now)
	public int radius = 50;

	void Start () {
		
		//object that updates camera position based on player position
		cameraPosition = GameObject.FindGameObjectWithTag("cameraPosition");

		StartCoroutine(setPositionOnVuforiaEnabled());

		//get reference to WWWHandler and get server data and parse it
		if(wwwHandler != null) {
			wwwScript = (WWWHandler) wwwHandler.gameObject.GetComponent(typeof(WWWHandler));
		}

		//get reference to map handler script
		if(mapObject != null) {
			map = (Mapbox.Unity.Map.AbstractMap) mapObject.GetComponent((typeof(Mapbox.Unity.Map.AbstractMap)));
		}
			
		if(directionsObject != null) {
			directionHandler = (DirectionsHandler)directionsObject.GetComponent(typeof(DirectionsHandler));
		}

		if (annotationObject != null){
			annotationHandler = (AnnotationHandler)annotationObject.GetComponent (typeof(AnnotationHandler));
		}

		if (uiObject != null) {
			uiHandler = (UIManager)uiObject.GetComponent (typeof(UIManager));
		}

		if (playerObject == null) {
			playerObject = GameObject.FindGameObjectWithTag ("Player");
		}
		setCompassDirection ();
	}
		

	public void setCompassDirection ()
	{
		cameraObject.transform.eulerAngles = new Vector3 (0, currentLoc.Heading, 0);
		mapObject.transform.Rotate(Vector3.up, -Input.compass.trueHeading);
	}

	public void setMapOrientation(float heading){
		//mapObject.transform.Rotate(Vector3.up, heading);
		var euler = Mapbox.Unity.Constants.Math.Vector3Zero;
		euler.y = heading;
		Quaternion mapTarget = Quaternion.Euler(euler);

		mapObject.transform.SetPositionAndRotation(mapObject.transform.position, mapTarget);
		Debug.Log("Map y rotation: " + mapObject.transform.rotation.y);
	}

	public void updateLocation(Location location, bool isInitialLocation, bool isHeadingUpdated, bool isLatLngUpdated){

		currentLoc = location;

//		locationText.GetComponent<UnityEngine.UI.Text>().text = "" + location.LatitudeLongitude.x + ", " + location.LatitudeLongitude.y;

		if(isInitialLocation == true){
			Debug.Log("Initial location set: " + location.LatitudeLongitude.ToString() + " with heading: " + location.Heading);
			setMapOrientation(location.Heading);
			StartCoroutine(getTrailsForLocation(location, 50));
			//getTestDirectionsFromLocation(location);
			StartCoroutine (annotationHandler.SetupMap ());
//			distanceText.GetComponent<UnityEngine.UI.Text> ().text = "Initialized";
		}


//		if(isHeadingUpdated){
//			if(compassText == null){
//				compassText = GameObject.FindGameObjectWithTag ("compassText");
//			}
//			compassText.GetComponent<UnityEngine.UI.Text> ().text = "Compass: " +  location.Heading;
//		}

		if(isLatLngUpdated){
			map = (Mapbox.Unity.Map.AbstractMap) mapObject.GetComponent((typeof(Mapbox.Unity.Map.AbstractMap)));
			playerObject.transform.MoveToGeocoordinate(location.LatitudeLongitude, map.CenterMercator, map.WorldRelativeScale);
		}
	}

	//updates camera position if user is touching screen
//	private void updateCameraPositionAuto(){ 
//
//		if(playerObject == null)
//			playerObject = GameObject.FindGameObjectWithTag("Player");
//
//		if(cameraPosition == null)
//			cameraPosition = GameObject.FindGameObjectWithTag("cameraPosition");
//
//		if (Input.touchSupported && Application.platform != RuntimePlatform.WebGLPlayer && Input.touchCount > 0) {
//
//			//Debug.Log("updating camera location Automatically");
//			playerObject.transform.position += UnityEngine.Camera.main.transform.forward * Time.deltaTime * speed;
//
//			//sets position for camera without rotation changes
//			Vector3 newPosition = new Vector3(playerObject.transform.position.x, cameraPosition.transform.position.y, playerObject.transform.position.z);
//			cameraPosition.transform.position = newPosition;
//
//			//		Camera hudCamera = playerObject.GetComponentInChildren<Camera>();
//			//		Quaternion camRot = new Quaternion(90, UnityEngine.Camera.main.transform.rotation.y, 0, 0);
//			//		hudCamera.transform.rotation = camRot;
//
//			lastPosition = playerObject.transform.position;
//			lastLocation = currentLocation;
//
//			distanceText.GetComponent<UnityEngine.UI.Text> ().text = "World Position: " + playerObject.transform.position.ToString();
//			//Debug.Log("New position: " + playerObject.transform.position);
//		}
//
//	}

	// Update is called once per frame
	void Update () {

		if(playerObject == null)
			playerObject = GameObject.FindGameObjectWithTag("Player");

		if(cameraPosition == null)
			cameraPosition = GameObject.FindGameObjectWithTag("cameraPosition");

		Vector3 newPosition = new Vector3(playerObject.transform.position.x, cameraPosition.transform.position.y, playerObject.transform.position.z);
		cameraPosition.transform.position = newPosition;

		//update hud camera
		Camera hudCamera = playerObject.GetComponentInChildren<Camera>();
		//Quaternion camRot = new Quaternion(UnityEngine.Camera.main.transform.rotation.x, UnityEngine.Camera.main.transform.rotation.y, UnityEngine.Camera.main.transform.rotation.z, 1);

		//rotate
		//hudCamera.transform.SetPositionAndRotation(hudCamera.transform.position, camRot);
		//hudCamera.transform.rotation = Quaternion.Lerp(hudCamera.transform.rotation, camRot, Time.deltaTime * 1);

		Quaternion lookAt = new Quaternion();
		lookAt.SetLookRotation(UnityEngine.Camera.main.transform.forward, Vector3.up);
		hudCamera.transform.SetPositionAndRotation(hudCamera.transform.position, lookAt);


		//hudCamera.transform.forward = UnityEngine.Camera.main.transform.forward;

		//hudCamera.transform.Rotate(

		// Let annotationHandler know the current location. Will need to change this to every 20 or so seconds
		//annotationHandler.updateLoc (currentLocation);
	}

	private IEnumerator setPositionOnVuforiaEnabled() {
		yield return new WaitForSeconds(0.2f);
		// Define the Spawn position only once
		if ( !isRootTransformSet ){
			// change the position only if Vuforia is active
			if ( VuforiaBehaviour.Instance.enabled )
				setRootTransform();
		}
	}

	void setRootTransform() {

		GameObject root = GameObject.FindGameObjectWithTag("rootTransform");

		Transform cam = UnityEngine.Camera.main.transform;

		if(cam != null) {
			//root.transform.position = cam.position;
			Quaternion q = new Quaternion(0, cam.transform.rotation.y, 0, 1);
			root.transform.rotation = q;

		}
			
		Debug.Log("root transform: " + root.transform);
	}

	void getTestDirectionsFromLocation(Location location){

		if(true){
			if(directionsObject == null){
				directionsObject = GameObject.FindGameObjectWithTag("DirectionsObject");
			}

			if(directionHandler == null) {
				directionHandler = (DirectionsHandler)directionsObject.GetComponent(typeof(DirectionsHandler));
			}
			if(wwwScript == null && wwwHandler != null){
				wwwScript = (WWWHandler)wwwHandler.GetComponent(typeof(WWWHandler));
			}

			directionHandler.StartCoroutine(directionHandler.getTestDirectionsFromJSON(wwwScript, location));
		}

	}

	// Pass trail name and user location to start getting directions for the trail
	void getTrailByName(string trailName, Location userLoc){


		if(directionHandler == null) {
			directionHandler = (DirectionsHandler)directionsObject.GetComponent(typeof(DirectionsHandler));
		}
		if(wwwScript == null && wwwHandler != null){
			wwwScript = (WWWHandler)wwwHandler.GetComponent(typeof(WWWHandler));
		}

		directionHandler.StartCoroutine(directionHandler.getDirectionsFromTrailName(wwwScript, trailName, userLoc));

	}

	void getFeaturesForLocation(Vector2 latLong) {
		//gets features at location
		wwwScript.GetFeaturesAtLocation(latLong);
	}


	public IEnumerator getTrailsForLocation(Location location, int rad){

		Debug.Log("getting trails at location: " + location.LatitudeLongitude.ToString());
		if(wwwScript == null && wwwHandler != null){
			wwwScript = (WWWHandler)wwwHandler.GetComponent(typeof(WWWHandler));
		}
		CoroutineWithData nearbyData = new CoroutineWithData(this, wwwScript.GetTrails(location.LatitudeLongitude.x, location.LatitudeLongitude.y, rad));
		yield return nearbyData.coroutine;

		var parsedNearby = SimpleJSON.JSON.Parse (nearbyData.result.ToString());

		Debug.Log("parsedNearby count: " + parsedNearby.Count);
		uiHandler.clearNearby ();
		for(int i = 0; i < parsedNearby.Count; i++){
			uiHandler.populateNearby(parsedNearby[i][0].ToString(), parsedNearby[i][1].ToString());
		}
		uiHandler.clearDuplicateTrails ();

		//DEBUG: GOAT TRAIL test first trail in renderer
//		string trail = parsedNearby[1][0];
//		getTrailByName(trail, location);

	}

	public void updateNearby(int rad){
		StartCoroutine(getTrailsForLocation(currentLoc, rad));
	}

	public void updateRadius(int rad){
		radius = rad;
	}

}

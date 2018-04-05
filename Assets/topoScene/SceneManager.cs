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
	private MapObjectHandler mapObjectHandler;
	private Mapbox.Unity.Map.MapAtWorldScale map;

	//locationManager
	public GameObject locationManagerObject;
	private LocationHandler locationHandler;

	//annotationHandler
	public GameObject annotationObject;
	private AnnotationHandler annotationHandler;

	//wwwHandler
	public GameObject wwwHandler;
	private WWWHandler wwwScript;

	//directionsHandler
	public GameObject directionsObject;
	private DirectionsHandler directionHandler;

	//UIHandler
	public GameObject uiObject;
	private UIManager UIHandler;

	public GameObject playerObject;

	private GameObject cameraPosition;

	private GameObject distanceText;
	private GameObject locationText;
	private GameObject compassText;

	//rastermap
//	public GameObject rasterMapObject;
//	private RasterMap rasterMap;


	private Vector2 initialLocation; //where user is on app start
	private Vector2 currentLocation; //where user is on latest location update with test = new Vector2((float)-4, 0);
	private Vector2 lastLocation;

	private Location initLoc;
	private Location currentLoc;
	private Location lastLoc;

	private int updateCount = 0;

	private Vector3 nextPosition;
	private Vector3 lastPosition;

	private GameObject nextPositionObject;

	private bool isRootTransformSet = false;

	private float speed = 3.0f;
	private float distanceScale = 1.0f;


	//private Vector2 testLocaiton = new Vector2((float)43.7021, (float)72.2890); //test location

	public int zoomFactor = 16; //handles the zoom level on the map (hardcode for now)

	public bool hasMapChanged = false;

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
			mapObjectHandler = (MapObjectHandler)mapObject.GetComponent(typeof(MapObjectHandler));
			map = (Mapbox.Unity.Map.MapAtWorldScale) mapObject.GetComponent((typeof(Mapbox.Unity.Map.MapAtWorldScale)));
		}
			
		if(directionsObject != null) {
			directionHandler = (DirectionsHandler)directionsObject.GetComponent(typeof(DirectionsHandler));
		}

		if(locationManagerObject != null){
			locationHandler = (LocationHandler)locationManagerObject.GetComponent(typeof(LocationHandler));
		}

		if (annotationObject != null){
			annotationHandler = (AnnotationHandler)annotationObject.GetComponent (typeof(AnnotationHandler));
		}

//		if (uiObject != null) {
//			UIHandler = (UIManager)uiObject.GetComponent (typeof(UIManager));
//		}

		if(playerObject == null)
			playerObject = GameObject.FindGameObjectWithTag("Player");

		lastPosition = playerObject.transform.position;
		//nextPosition = playerObject.transform.position;

		nextPositionObject = new GameObject();

		setCompassDirection ();
	}

	public void setCompassDirection ()
	{
		compassText = GameObject.FindGameObjectWithTag ("compassText");
		cameraObject.transform.eulerAngles = new Vector3 (0, currentLoc.Heading, 0);
		if (currentLoc.Heading != null) {
			compassText.GetComponent<UnityEngine.UI.Text> ().text = "Compass: " +  locationHandler.compassDirection;
			mapObject.transform.Rotate(Vector3.up, -locationHandler.compassDirection);
		}
	}

	public void setMapOrientation(float heading){
		//mapObject.transform.Rotate(Vector3.up, heading);
		var euler = Mapbox.Unity.Constants.Math.Vector3Zero;
		euler.y = heading;
		Quaternion mapTarget = Quaternion.Euler(euler);

		mapObject.transform.SetPositionAndRotation(mapObject.transform.position, mapTarget);
		Debug.Log("Map y rotation: " + mapObject.transform.rotation.y);
	}

	public void updateLocation(Vector2 location, bool isInitialLocation) {

		//Debug.Log("Update Location SceneManager called");
		//Debug.Log("is initial loc: " + isInitialLocation);
		//Debug.Log("this location: " + location);

		if(location != Vector2.zero) {

			//set initial map
			if (isInitialLocation == true) {
				Debug.Log("Initial location set");
				//get initial location to build starting map
				initialLocation = location;
				lastLocation = location;

				//set ui
				locationText = GameObject.FindGameObjectWithTag("locationText");
				locationText.GetComponent<UnityEngine.UI.Text>().text = "Lat: " + location.x + " Lon: " + location.y;

				distanceText = GameObject.FindGameObjectWithTag("distanceText");
				distanceText.GetComponent<UnityEngine.UI.Text> ().text = "Initialized";

				compassText = GameObject.FindGameObjectWithTag ("compassText");

				//get directions relevant to this location
				//getDirectionsFromLocation(initialLocation);

				//setMapForLocation(initialLocation, zoomFactor);
			}

			//handle other location changes
			//transform camera according to gps change
			else if (location != lastLocation){
				distanceText = GameObject.FindGameObjectWithTag("distanceText");
				distanceText.GetComponent<UnityEngine.UI.Text> ().text = "hi";
				locationText.GetComponent<UnityEngine.UI.Text>().text = "Updated Lat: " + location.x + " Lon: " + location.y;
				playerObject = GameObject.FindGameObjectWithTag("Player");
				map = (Mapbox.Unity.Map.MapAtWorldScale) mapObject.GetComponent((typeof(Mapbox.Unity.Map.MapAtWorldScale)));
				playerObject.transform.MoveToGeocoordinate (location.x, location.y, map.CenterMercator, map.WorldRelativeScale);
				//updateCameraPosition(lastLocation, location);
			}
		}
	}


	public void updateLocation(Location location, bool isInitialLocation, bool isHeadingUpdated, bool isLatLngUpdated){



		currentLoc = location;

		locationText = GameObject.FindGameObjectWithTag("locationText");
		locationText.GetComponent<UnityEngine.UI.Text>().text = "" + location.LatitudeLongitude.x + ", " + location.LatitudeLongitude.y;
		distanceText = GameObject.FindGameObjectWithTag("distanceText");



		if(isInitialLocation == true){
			Debug.Log("Initial location set: " + location.LatitudeLongitude.ToString() + " with heading: " + location.Heading);
			initLoc = location;
			setMapOrientation(location.Heading);
			getDirectionsFromLocation(location);
			StartCoroutine (annotationHandler.SetupMap (wwwScript));
			distanceText.GetComponent<UnityEngine.UI.Text> ().text = "Initialized";
		}


		if(isHeadingUpdated){
			string heading = "New heading: " + location.Heading.ToString();
			if(compassText == null){
				compassText = GameObject.FindGameObjectWithTag ("compassText");
			}
			compassText.GetComponent<UnityEngine.UI.Text> ().text = "Compass: " +  location.Heading;
		}

		if(isLatLngUpdated){

			string loc = "New latLng: " + location.LatitudeLongitude.ToString();

			locationText.GetComponent<UnityEngine.UI.Text>().text = "" + location.LatitudeLongitude.x + ", " + location.LatitudeLongitude.y;
			if(hasMapChanged == false){
				map = (Mapbox.Unity.Map.MapAtWorldScale) mapObject.GetComponent((typeof(Mapbox.Unity.Map.MapAtWorldScale)));
				//nextPositionObject.transform.MoveToGeocoordinate(location.LatitudeLongitude, map.CenterMercator, map.WorldRelativeScale);
				playerObject.transform.MoveToGeocoordinate(location.LatitudeLongitude, map.CenterMercator, map.WorldRelativeScale);
				//playerObject.transform.position.y = 3.0f;
				distanceText.GetComponent<UnityEngine.UI.Text> ().text = "World Position: " + playerObject.transform.position.ToString();
			}
		}

	}
	//potentially don't need anymore
	private void updateCameraPosition(Vector2 lastLocation, Vector2 currentLocation) {


		playerObject.transform.position = Quaternion.AngleAxis(lastLocation[1], -Vector3.up) * Quaternion.AngleAxis(lastLocation[0], -Vector3.right) * new Vector3(0,0,1);

//		float distance = (float)Calc(lastLocation.x, lastLocation.y, currentLocation.x, currentLocation.y);
//
//		nextPosition = lastPosition - new Vector3 (0, 0, distance * distanceScale);
//
//		if(playerObject == null)
//			playerObject = GameObject.FindGameObjectWithTag("Player");
//
//		float transformDist = Vector3.Distance(playerObject.transform.position, nextPosition);
//
//		//nextPosition = playerObject.transform.TransformDirection(nextPosition);
//		playerObject.transform.position = Vector3.Lerp(playerObject.transform.position, nextPosition, speed);

		lastPosition = playerObject.transform.position;
		lastLocation = currentLocation;
			
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
//		compassText.GetComponent<UnityEngine.UI.Text> ().text = "Compass: " +  locationHandler.compassDirection;
//
//		if(compassText.GetComponent<UnityEngine.UI.Text> ().text == "0"){
//			setCompassDirection ();
//		}

//		if(playerObject.transform.position != nextPositionObject.transform.position){
//			Vector3.Lerp(playerObject.transform.position, nextPositionObject.transform.position, Time.deltaTime);
//		}

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

//	void setMapForLocation(Vector2 latLong, int zFactor) {
//
//		Debug.Log("Setting map for location");
//		Debug.Log(latLong);
//
//		if(latLong != Vector2.zero) {
//			if(mapObjectHandler == null) {
//				mapObjectHandler = (MapObjectHandler)mapObject.GetComponent(typeof(MapObjectHandler));
//			}
//				
//			//initialize map
//			mapObjectHandler.initiliazeMap(latLong, zFactor);
//		}
//
//	}

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

	void getDirectionsFromLocation(Location location){

		if(true){
			initLoc = location;
			//initialLocation = initLoc;

			if(directionsObject == null){
				directionsObject = GameObject.FindGameObjectWithTag("DirectionsObject");
			}

			if(directionHandler == null) {
				directionHandler = (DirectionsHandler)directionsObject.GetComponent(typeof(DirectionsHandler));
			}
			if(wwwScript == null && wwwHandler != null){
				wwwScript = (WWWHandler)wwwHandler.GetComponent(typeof(WWWHandler));
			}

//			Debug.Log("get directions");
//			Debug.Log(initLoc);
//			Debug.Log(directionHandler.isActiveAndEnabled);

			directionHandler.StartCoroutine(directionHandler.getDirectionsFromJSON(wwwScript, location));
		}

	}

	void getFeaturesForLocation(Vector2 latLong) {
		//gets features at location
		wwwScript.GetFeaturesAtLocation(latLong);
	}
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using SimpleJSON;
using Mapbox.Utils;
using Mapbox.Unity.Map;
using Mapbox.Unity.Utilities;

public class DirectionsHandler : MonoBehaviour {


	[SerializeField]
	GameObject map;

	[SerializeField]
	GameObject rayCastObject;

	public Vector2d[] waypoints;

	public List<Vector2d> waypointList;

	public float[] heights;

	private double[] coordinateArray;

	public float scaleRadius = 100f;

	//public Transform[] transforms;

	private Vector3[] positions;

	private Vector2 initialLocation;

	private Vector3 playerRayOrigin;

	LineRenderer lineRenderer;

	WWWHandler wwwScript;

	public Text errorText;
	public TransitionalObject errorTransitionalObject;

	public bool overlayPathOnMap = false;

	AbstractMap _map;

	public float totalOffset;

	public float trailElevationBuffer = 0.3f;

	public float loadTime = 1;




	// Use this for initialization

//	public void prepareForStart(WWWHandler www, Vector2 initLocation) {

//		wwwScript = www;
//
//		initialLocation = initLocation;
//
//		waypointList = new List<Vector2d>();
//
//		Vector3 playerRayOrigin = new Vector3(initialLocation.x, rayCastObject.transform.position.y, initialLocation.y);
//

		//this.StartCoroutine(this.getDirectionsFromJSON);

//	}

	void Start(){
		_map =  (AbstractMap)map.GetComponent(typeof(AbstractMap));
		playerRayOrigin = new Vector3(initialLocation.x, rayCastObject.transform.position.y, initialLocation.y);
		if(rayCastObject == null){
			if(overlayPathOnMap == false)
				rayCastObject = GameObject.FindGameObjectWithTag("rayCastObject");
			else
				rayCastObject = GameObject.FindGameObjectWithTag("rayCastObjectSearch");
		}
	}

	public IEnumerator waitForMapLoad(){
		yield return new WaitForSeconds (3f);
		if (castRaycastDownAtPosition (playerRayOrigin) == playerRayOrigin.y) {
			errorTransitionalObject.TriggerTransition ();
			errorText.gameObject.SetActive (true);
			errorText.text = "Unable to detect GPS location. Please reload HikAR.";
		}
	}


	//** THIS IS FOR THE TEST TRAIL **//
	public IEnumerator getTestDirectionsFromJSON (WWWHandler www, Mapbox.Unity.Location.Location location) {

		Debug.Log("Converting JSON to vec2d");

		wwwScript = www;

		waypointList = new List<Vector2d>();


		//initialLocation
		Vector3 initLoc = UnityVectorFromVec2d (location.LatitudeLongitude);
		initialLocation = new Vector3(initLoc.x, initLoc.z);


		CoroutineWithData nodeData = new CoroutineWithData(this, wwwScript.GetTestTrail());
		yield return nodeData.coroutine;
		JSONNode parsedNode = SimpleJSON.JSON.Parse (nodeData.result.ToString ());

		for(int i = 0; i < parsedNode.Count; i++) {

			double lat = parsedNode[i] ["Latitude"].AsDouble;
			double lon = parsedNode[i] ["Longitude"].AsDouble;

			Vector2d vec2d = new Vector2d(lat, lon);

			waypointList.Add(vec2d);

		}

		//waypoints = new Mapbox.Utils.Vector2d[(waypointList.Count * 2) - 1]; //minus one because you can't calculate midpoint at end
		waypoints = new Vector2d[waypointList.Count]; //1:1 trail 
		heights = new float[waypointList.Count];
		waypoints = waypointList.ToArray();
		startDirections();
	}


	//**THIS FUNCTION QUERIES FOR THE TRAIL NAME AND CREATES THE ACTUAL TRAIL RENDERER LINE**//

	public IEnumerator getDirectionsFromTrailName(WWWHandler www, string trailName, Mapbox.Unity.Location.Location location){

		Debug.Log("Getting trail: " + trailName);

		wwwScript = www;
		waypointList = new List<Vector2d>();

		//set initialLocation (probably as trail head node) as vec2

		//initialLocation
		Vector3 initLoc = UnityVectorFromVec2d(location.LatitudeLongitude);
		initialLocation = new Vector3(initLoc.x, initLoc.z);

		//store all waypoints as Vec2ds
		CoroutineWithData nodeData = new CoroutineWithData(this, wwwScript.GetTrail(trailName));
		yield return nodeData.coroutine;
		try{
			JSONNode parsedNode = SimpleJSON.JSON.Parse (nodeData.result.ToString ());

			Debug.Log("trail node count: " + parsedNode["geometry"]["coordinates"].Count);

			Debug.Log(parsedNode.ToString());

			for(int i = 0; i < parsedNode["geometry"]["coordinates"].Count; i++) {

				double lat = parsedNode["geometry"]["coordinates"][i][1].AsDouble;
				double lon = parsedNode["geometry"]["coordinates"][i][0].AsDouble;

				Vector2d vec2d = new Vector2d(lat, lon);

				waypointList.Add(vec2d);

			}

			//waypoints = new Mapbox.Utils.Vector2d[(waypointList.Count * 2) - 1]; //minus one because you can't calculate midpoint at end
			waypoints = new Vector2d[waypointList.Count]; //1:1 trail 
			heights = new float[waypointList.Count];
			waypoints = waypointList.ToArray();

			//wait for map to load before directions
			StartCoroutine(this.waitForTime(loadTime));
		} catch {}
	}

	public void getDirectionsFromLatLngs(List<Mapbox.Utils.Vector2d> waypointsList){
		waypointList = waypointsList;
		waypoints = new Vector2d[waypointsList.Count]; //1:1 trail 
		heights = new float[waypointsList.Count];
		waypoints = waypointsList.ToArray();

		//wait for map to load before directions
		StartCoroutine(this.waitForTime(loadTime));
	}

	public void getDirectionsFromSearchMap(List<Mapbox.Utils.Vector2d> waypointsList, float[] heights){

		//initialize arrays
		waypointList = waypointsList;
		waypoints = new Vector2d[waypointsList.Count]; //1:1 trail 
		positions = new Vector3[waypointsList.Count];
		waypoints = waypointsList.ToArray();
		float mapOffset = rayCastObject.transform.position.y - map.transform.position.y;

		setTotalOffset ();
		for(int i = 0; i < waypoints.Length; i++){
			Vector3 adjustedPosition = UnityVectorFromVec2dMap(waypoints[i]);
			adjustedPosition.y = heights[i];
			positions[i] = adjustedPosition;
		}
		drawLine();
	}

	//waits for a couple seconds before loading trail
	public IEnumerator waitForTime(float time){
		yield return new WaitForSeconds(time);
		startDirections();
	}


	public void startDirections () {

		//need original position of user in Vector3 ... maybe vec2 -> vec2d -> vec3 

		//positions for path
		positions = new Vector3[waypoints.Length]; 

		//Vector3 initialPosition = new Vector3(0,0,0); //currently 0
		//positions[0] = initialPosition; 

		for(int i = 0; i < waypoints.Length; i++) {

			//pass info into helper function
			Vector3 position = UnityVectorFromVec2dMap(waypoints[i]);

			//set direction transform to first location
			if(i == 0){
				this.transform.position = position;
			}

			//do something with y value ... calculate or normalize
			//position.y = 1;

			positions[i] = position;
		}
		//calculate heights of positions using raycasts
		calculateHeights();
//		if(overlayPathOnMap == false){
//			calculateHeights();
//		} else {
//			queryHeights();
//		}

	}

	public void setTotalOffset() {

		//calculate distance to map from rayOrigin
		float mapOffset = rayCastObject.transform.position.y - map.transform.position.y;
		float playerOffset = 0;

		if(overlayPathOnMap == false){
			//position map at player's level i.e. in front of AR view

			//calculate height at player position for offset
			playerOffset = castRaycastDownAtPosition(playerRayOrigin);
			playerOffset -= mapOffset; //mapOffset skews it
		} else if(overlayPathOnMap == true) {
			mapOffset = 0; //fix it onto the map
		}
		//calculate total path offset
		totalOffset = mapOffset + playerOffset;
		Debug.Log("Height: " + playerOffset + " at player (x,z): (" + initialLocation.x + ", " + initialLocation.y + ")");

		Debug.Log("Map Offset: " + mapOffset + "  playerOffset: " + playerOffset + "  totalOffset: " + totalOffset);

	}

	void calculateHeights(){ //calculate heights using raycasting

		setTotalOffset ();

		for(int i = 0; i < positions.Length; i++){
			Vector3 rayOrigin = new Vector3(positions[i].x, rayCastObject.transform.position.y, positions[i].z);

			float height = castRaycastDownAtPosition(rayOrigin);
			if(height != rayOrigin.y){
				//adjust path to player level
				heights[i] = height;
				height -= totalOffset;
			} else {
				height = (rayOrigin.y - map.transform.position.y) - totalOffset;
			}

			if(overlayPathOnMap == true)
				height += trailElevationBuffer;

			Debug.Log("height for position: " + i + " is " + height);

			//create new vector
			Vector3 newPos = new Vector3(positions[i].x, height, positions[i].z);
			positions[i] = newPos;
		}

		//call render function
		drawLine();

	}

	void queryHeights() { //calculate heights using mapbox tile query
		for(int i = 0; i < waypoints.Length; i++){
			float unityHeight = getHeightForPosition(waypoints[i]);
			//create new vector
			Vector3 newPos = new Vector3(positions[i].x, unityHeight, positions[i].z);
			positions[i] = newPos;
		}
		//call render function
		drawLine();
	}

	public Vector3 UnityVectorFromVec2dMap(Vector2d vec2d) {
		return _map.GeoToWorldPosition(vec2d, true);
	}

	public Vector3 UnityVectorFromVec2d(Vector2d vec2d) {
		return Conversions.GeoToWorldPosition(vec2d, _map.CenterMercator, _map.WorldRelativeScale).ToVector3xz();
	}
		
	public Vector2d Vec2dFromUnityVector(Vector3 unityVector){
		return _map.WorldToGeoPosition (unityVector);
	}

	void drawLine(){

		//set lineRenderer positions to draw
		lineRenderer = GetComponent<LineRenderer> ();
		lineRenderer.positionCount = positions.Length;
		lineRenderer.SetPositions (positions);

		lineRenderer.numCapVertices = 10; //adjust this value for smoother lines (90 MAX)

		//Reset the offset
		totalOffset = 0;
	}

	public void clearLine(){
		//call before updating trail
		lineRenderer = GetComponent<LineRenderer> ();
		lineRenderer.positionCount = 0;
	}

	public float castRaycastDownAtPosition(Vector3 rayOrigin){

		rayCastObject.transform.position = rayOrigin;
		Vector3 down = -Vector3.up;
		RaycastHit hit;
		float height;

		if(Physics.Raycast(rayOrigin, down, out hit)){
			//Debug.DrawRay(rayOrigin, down * hit.distance);
			height = (rayOrigin.y - hit.distance);
		}
		else{
			Debug.Log("RayCast hit failed: " + hit.distance + " at location: " + rayOrigin);
			height = rayOrigin.y;

		}

		return height;
	}

	public float getHeightForPosition(Mapbox.Utils.Vector2d position){
		float height = _map.QueryElevationInUnityUnitsAt(position);
		return height;
	}
}

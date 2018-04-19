using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SimpleJSON;
using Mapbox.Unity;

public class DirectionsHandler : MonoBehaviour {


	[SerializeField]
	GameObject map;

	[SerializeField]
	GameObject rayCastObject;

	private Mapbox.Utils.Vector2d[] waypoints;

	private List<Mapbox.Utils.Vector2d> waypointList;

	private double[] coordinateArray;

	private float scaleRadius = 100f;

	//public Transform[] transforms;

	private Vector3[] positions;

	private Vector2 initialLocation;

	LineRenderer lineRenderer;

	WWWHandler wwwScript;

	public bool overlayPathOnMap = false;


	// Use this for initialization

	public void prepareForStart(WWWHandler www, Vector2 initLocation) {

		wwwScript = www;

		initialLocation = initLocation;

		waypointList = new List<Mapbox.Utils.Vector2d>();

		//this.StartCoroutine(this.getDirectionsFromJSON);

	}


	//** THIS IS FOR THE TEST TRAIL **//
	public IEnumerator getDirectionsFromJSON (WWWHandler www, Mapbox.Unity.Location.Location location) {

		Debug.Log("Converting JSON to vec2d");

		wwwScript = www;

		waypointList = new List<Mapbox.Utils.Vector2d>();


		//initialLocation
		Vector2 refLoc = new Vector2((float)location.LatitudeLongitude.x, (float)location.LatitudeLongitude.y);
		Vector3 initLoc = UnityVectorFromVec2d(location.LatitudeLongitude, refLoc, scaleRadius);
		initialLocation = new Vector3(initLoc.x, initLoc.z);


		CoroutineWithData nodeData = new CoroutineWithData(this, wwwScript.GetTestTrail());
		yield return nodeData.coroutine;
		var parsedNode = SimpleJSON.JSON.Parse (nodeData.result.ToString ());

//		Debug.Log(parsedNode.Count);

		for(int i = 0; i < parsedNode.Count; i++) {

			double lat = parsedNode[i] ["Latitude"].AsDouble;
			double lon = parsedNode[i] ["Longitude"].AsDouble;

			Mapbox.Utils.Vector2d vec2d = new Mapbox.Utils.Vector2d(lat, lon);

			waypointList.Add(vec2d);

		}

		//waypoints = new Mapbox.Utils.Vector2d[(waypointList.Count * 2) - 1]; //minus one because you can't calculate midpoint at end
		waypoints = new Mapbox.Utils.Vector2d[waypointList.Count]; //1:1 trail 
		waypoints = waypointList.ToArray();


		startDirections();

	}


	//**THIS FUNCTION QUERIES FOR THE TRAIL NAME**//

	public IEnumerator getDirectionsFromTrailName(WWWHandler www, string trailName, Mapbox.Unity.Location.Location location){

		Debug.Log("Getting trail: " + trailName);

		wwwScript = www;
		waypointList = new List<Mapbox.Utils.Vector2d>();

		//set initialLocation (probably as trail head node) as vec2

		//initialLocation
		Vector2 refLoc = new Vector2((float)location.LatitudeLongitude.x, (float)location.LatitudeLongitude.y);
		Vector3 initLoc = UnityVectorFromVec2d(location.LatitudeLongitude, refLoc, scaleRadius);
		initialLocation = new Vector3(initLoc.x, initLoc.z);

		//store all waypoints as Vec2ds
		CoroutineWithData nodeData = new CoroutineWithData(this, wwwScript.GetTrail(trailName));
		yield return nodeData.coroutine;
		var parsedNode = SimpleJSON.JSON.Parse (nodeData.result.ToString ());

		Debug.Log("trail node count: " + parsedNode["geometry"]["coordinates"].Count);

		Debug.Log(parsedNode.ToString());

		for(int i = 0; i < parsedNode["geometry"]["coordinates"].Count; i++) {

			double lat = parsedNode["geometry"]["coordinates"][i][1].AsDouble;
			double lon = parsedNode["geometry"]["coordinates"][i][0].AsDouble;

			Mapbox.Utils.Vector2d vec2d = new Mapbox.Utils.Vector2d(lat, lon);

			waypointList.Add(vec2d);

		}

		//waypoints = new Mapbox.Utils.Vector2d[(waypointList.Count * 2) - 1]; //minus one because you can't calculate midpoint at end
		waypoints = new Mapbox.Utils.Vector2d[waypointList.Count]; //1:1 trail 
		waypoints = waypointList.ToArray();

		startDirections();
	}

	public void getDirectionsFromLatLngs(List<Mapbox.Utils.Vector2d> waypointsList){

		waypoints = new Mapbox.Utils.Vector2d[waypointsList.Count]; //1:1 trail 
		waypoints = waypointsList.ToArray();

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
			Vector3 position = UnityVectorFromVec2d(waypoints[i], initialLocation, scaleRadius);

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

	}

	void calculateHeights(){

		//RAYCASTOBJECT HEIGHT IS 1100
		//MAP BASE HEIGHT IS 1000
		//mapOffset should be 100

		if(rayCastObject == null){
			rayCastObject = GameObject.FindGameObjectWithTag("rayCastObject");
		}

		//calculate distance to map from rayOrigin
		float mapOffset = rayCastObject.transform.position.y - map.transform.position.y;
		float playerOffset = 0;

		if(overlayPathOnMap == false){
			//position map at player's level i.e. in front of AR view

			//calculate height at player position for offset
			Vector3 playerRayOrigin = new Vector3(initialLocation.x, rayCastObject.transform.position.y, initialLocation.y);
			playerOffset = castRaycastDownAtPosition(playerRayOrigin) - mapOffset; //mapOffset skews it
		} else {
			mapOffset = 0; //fix it onto the map
		}



		//calculate total path offset
		float totalOffset = mapOffset + playerOffset;

		Debug.Log("Height: " + playerOffset + " at player (x,z): (" + initialLocation.x + ", " + initialLocation.y + ")");

		Debug.Log("Map Offset: " + mapOffset + "  playerOffset: " + playerOffset + "  totalOffset: " + totalOffset);


		for(int i = 0; i < positions.Length; i++){
			Vector3 rayOrigin = new Vector3(positions[i].x, rayCastObject.transform.position.y, positions[i].z);

			float height = castRaycastDownAtPosition(rayOrigin);

			if(height != rayOrigin.y){
				//adjust path to player level
				height -= totalOffset;

				Vector3 newPos = new Vector3(positions[i].x, height, positions[i].z);
				positions[i] = newPos;

				//Debug.Log("height for position: " + i + " is " + height);
			}
		}

		//call render function
		drawLine();

	}


	public Vector3 UnityVectorFromVec2d(Mapbox.Utils.Vector2d vec2d, Vector2 refLoc, float radius) {

		//Mapbox.Utils.Vector2d refVec2d = new Mapbox.Utils.Vector2d(refLoc.x, refLoc.y);

		//GameObject mapObject = GameObject.FindGameObjectWithTag("MapObject");

		Mapbox.Unity.Map.MapAtWorldScale _map = (Mapbox.Unity.Map.MapAtWorldScale)map.GetComponent(typeof(Mapbox.Unity.Map.MapAtWorldScale));

		//Mapbox.Utils.Vector2d worldPositionVec2d = Mapbox.Unity.Utilities.Conversions.GeoToWorldPosition(vec2d, _map.CenterMercator, _map.WorldRelativeScale);

		//Vector3 unityPosition = (Vector3)Mapbox.Unity.Utilities.Conversions.GeoToWorldGlobePosition(worldPositionVec2d, _map.WorldRelativeScale);

		Vector3 unityPosition = (Vector3)_map.GeoToWorldPosition(vec2d);

		//print("position 1: " + unityPosition.ToString() + "    position 2: " + testPosition.ToString());

		return unityPosition;

	}

	void drawLine(){
		
		//set lineRenderer positions to draw
		lineRenderer = GetComponent<LineRenderer>();
		lineRenderer.positionCount = positions.Length;
		lineRenderer.SetPositions(positions);

		Color startColor = Color.green;
		Color endColor = Color.red;
		lineRenderer.startColor = startColor;
		lineRenderer.endColor = endColor;

		lineRenderer.numCapVertices = 90; //adjust this value for smoother lines (90 MAX)
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
	
	// Update is called once per frame
	void Update () {
		
	}
}

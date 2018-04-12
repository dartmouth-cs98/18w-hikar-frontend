using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SimpleJSON;
using Mapbox.Unity;

public class DirectionsHandler : MonoBehaviour {

	private Mapbox.Utils.Vector2d[] waypoints;

	private List<Mapbox.Utils.Vector2d> waypointList;

	private double[] coordinateArray;

	private float scaleRadius = 50f;

	//public Transform[] transforms;

	private Vector3[] positions;

	private Vector2 initialLocation;

	LineRenderer lineRenderer;

	WWWHandler wwwScript;

	// Use this for initialization

	public void prepareForStart(WWWHandler www, Vector2 initLocation) {

		wwwScript = www;

		initialLocation = initLocation;

		waypointList = new List<Mapbox.Utils.Vector2d>();

		//this.StartCoroutine(this.getDirectionsFromJSON);

	}

	public IEnumerator getDirectionsFromJSON (WWWHandler www, Mapbox.Unity.Location.Location location) {

//		Debug.Log("Converting JSON to vec2d");

		wwwScript = www;

		waypointList = new List<Mapbox.Utils.Vector2d>();

		//insert initial location
		//initialLocation = initLocation;
		//Mapbox.Utils.Vector2d initVec2d = new Mapbox.Utils.Vector2d(initialLocation.x, initialLocation.y); //use initLocation variables for real
		//waypointList.Add(initVec2d);

		CoroutineWithData nodeData = new CoroutineWithData(this, wwwScript.GetNode());
		yield return nodeData.coroutine;
		var parsedNode = SimpleJSON.JSON.Parse (nodeData.result.ToString ());

//		Debug.Log(parsedNode.Count);

		for(int i = 0; i < parsedNode.Count; i++) {

			double lat = parsedNode[i] ["Latitude"].AsDouble;
			double lon = parsedNode[i] ["Longitude"].AsDouble;

			Mapbox.Utils.Vector2d vec2d = new Mapbox.Utils.Vector2d(lat, lon);

			waypointList.Add(vec2d);

		}

		waypoints = new Mapbox.Utils.Vector2d[waypointList.Count];
		waypoints = waypointList.ToArray();


		startDirections();

	}

	public void getDirectionsFromLatLngs(Vector2[] latlngs){

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
			position.y = 1;

			positions[i] = position;
		}

		//set lineRenderer positions to draw
		lineRenderer = GetComponent<LineRenderer>();
		lineRenderer.positionCount = positions.Length;
		lineRenderer.SetPositions(positions);

		Color startColor = Color.green;
		Color endColor = Color.red;
		lineRenderer.startColor = startColor;
		lineRenderer.endColor = endColor;

	}


	public Vector3 UnityVectorFromVec2d(Mapbox.Utils.Vector2d vec2d, Vector2 refLoc, float radius) {

		//Mapbox.Utils.Vector2d refVec2d = new Mapbox.Utils.Vector2d(refLoc.x, refLoc.y);

		GameObject mapObject = GameObject.FindGameObjectWithTag("MapObject");

		Mapbox.Unity.Map.MapAtWorldScale map = (Mapbox.Unity.Map.MapAtWorldScale)mapObject.GetComponent(typeof(Mapbox.Unity.Map.MapAtWorldScale));

		Mapbox.Utils.Vector2d worldPositionVec2d = Mapbox.Unity.Utilities.Conversions.GeoToWorldPosition(vec2d, map.CenterMercator, map.WorldRelativeScale);

		Vector3 unityPosition = (Vector3)Mapbox.Unity.Utilities.Conversions.GeoToWorldGlobePosition(worldPositionVec2d, radius);

		return unityPosition;

	}
	
	// Update is called once per frame
	void Update () {
		
	}
}

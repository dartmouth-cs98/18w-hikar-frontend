using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Mapbox.Unity.Map;
using SimpleJSON;

public class SearchMap : MonoBehaviour {


	[SerializeField]
	AbstractMap map;

	[SerializeField]
	Camera searchCamera;

	[SerializeField]
	DirectionsHandler directions;

	List<Mapbox.Utils.Vector2d> waypointList;

	Vector3 cameraPosition;

	//first waypoint aka trailhead
	Mapbox.Utils.Vector2d trailhead;

	void Awake () {

		//camera = GameObject.FindGameObjectWithTag("SearchCamera");
		cameraPosition = searchCamera.transform.position;

		if(map == null){
			map = (AbstractMap)GameObject.FindGameObjectWithTag("SearchMap").GetComponent(typeof(AbstractMap));
		}
	}
	

	public void searchForLocation(Mapbox.Utils.Vector2d location, bool displayTrail){
		Debug.Log("Searching for Map at: " + location);
		searchCamera.transform.position = cameraPosition;
		map.UpdateMap(location, 16);

		if(displayTrail == true){
			directions.getDirectionsFromLatLngs(waypointList);
		}
	}

	public void loadMapWithBounds(Mapbox.Utils.Vector2dBounds bounds){

		//clear previous trail
		directions.clearLine();

		Debug.Log("Bounding Map at: " + bounds);
        //Mapbox.Map.TileCover.
		map.UpdateMap(bounds.Center, 16);

		//move camera position to center of trail bounds
		Vector3 newCameraPosition = map.GeoToWorldPosition(bounds.Center, true);
		Debug.Log("Vector3 of bounds.center: " + newCameraPosition);
		newCameraPosition.y = cameraPosition.y;
		searchCamera.transform.position = newCameraPosition;

		////trying to get a tilecover given a bounds
		//HashSet<Mapbox.Map.CanonicalTileId> tiles = Mapbox.Map.TileCover.Get(bounds, 16);
        //IReadOnlyList<Mapbox.Map.UnwrappedTileId> tileList = tiles.ToReadOnlyList();
        //var boundmap = new Mapbox.Map.Map<Mapbox.Map.RasterTile>(Mapbox.Unity.MapboxAccess.Instance);
        //boundmap.SetVector2dBoundsZoom(bounds, 16);
        //Debug.Log(tiles);
        //for(int i = 0; i < tileList.Count; i++){
        //  Mapbox.Map.UnwrappedTileId tile = tileList[i];
        //  Debug.Log(tile.ToString());
        //  map.MapVisualizer.LoadTile(tile);
        //}


		


		//load trail
		directions.getDirectionsFromLatLngs(waypointList);

	}

	// This instantiates the map for the trail location for search camera
	public IEnumerator getTrailForLocation(WWWHandler www, string trailName){

		//store all waypoints as Vec2ds
		waypointList = new List<Mapbox.Utils.Vector2d>();

		//parse data
		CoroutineWithData trailData = new CoroutineWithData(this, www.GetTrail(trailName));
		yield return trailData.coroutine;
		JSONNode parsedTrail = SimpleJSON.JSON.Parse (trailData.result.ToString ());

		//used to calculate the bounds for the trail
		double south = double.MaxValue;
		double north = double.MinValue;
		double west = double.MaxValue;
		double east = double.MinValue;

		bool isTrailHead = true;
		double latHead = 0;
		double lonHead = 0;

		for(int i = 0; i < parsedTrail["geometry"]["coordinates"].Count; i++) {
			if (i == 0) {
				latHead = parsedTrail["geometry"]["coordinates"][0][1].AsDouble;
				lonHead = parsedTrail["geometry"]["coordinates"][0][0].AsDouble;
			}

			double lat = parsedTrail["geometry"]["coordinates"][i][1].AsDouble;
			double lon = parsedTrail["geometry"]["coordinates"][i][0].AsDouble;

			Mapbox.Utils.Vector2d vec2d = new Mapbox.Utils.Vector2d(lat, lon);

			waypointList.Add(vec2d);

			//find the ne,sw bounds
			if(lat < south)
				south = lat;
			if(lat > north)
				north = lat;
			if(lon < west)
				west = lon;
			if(lon > east)
				east = lon;

			if(isTrailHead == true){
				trailhead = vec2d;
				isTrailHead = false;
			}

		}

		Mapbox.Utils.Vector2d ne = new Mapbox.Utils.Vector2d(north, east);
		Mapbox.Utils.Vector2d sw = new Mapbox.Utils.Vector2d(south, west);
		Mapbox.Utils.Vector2dBounds bounds = new Mapbox.Utils.Vector2dBounds(sw, ne);
		loadMapWithBounds(bounds);

//		if (latHead != 0 || lonHead != 0) {
//			Mapbox.Utils.Vector2d searchLoc = new Mapbox.Utils.Vector2d (latHead, lonHead);
//			searchForLocation (searchLoc, false);
//		}
	}


	//Simply returns the superficial trailhead data
	public IEnumerator getTrailData(WWWHandler www, string trailName){
		CoroutineWithData trailData = new CoroutineWithData(this, www.GetTrail(trailName));
		yield return trailData.coroutine;
		JSONNode parsedTrail = JSON.Parse (trailData.result.ToString());
		//TODO: get a trailhead lat/lon
		double lat = parsedTrail["geometry"]["coordinates"][0][1].AsDouble;
		double lon = parsedTrail["geometry"]["coordinates"][0][0].AsDouble;
		Mapbox.Utils.Vector2d searchLoc = new Mapbox.Utils.Vector2d (lat, lon);
		searchForLocation (searchLoc, false);
	}
}

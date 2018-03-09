/*@authors: Raunak Bhojwani and Josh Thomas
 * 
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LocationHandler : MonoBehaviour {

	public static LocationHandler Instance { set; get; }

	public GameObject sceneManagerObject;
	private SceneManager sceneManager;

	private Vector2 lastLocation;

	public float latitude;
	public float longitude;
	public float altitude;
	public float compassDirection;

	private bool isInitialLocation;

	// ****** Got this code from unity docs ***** //

	// Use this for initialization

	public void Start() {
		
		Instance = this;
		DontDestroyOnLoad (gameObject);

		//get scenemanager ref
		sceneManager = (SceneManager) sceneManagerObject.GetComponent(typeof(SceneManager));

		isInitialLocation = true;

		StartCoroutine (StartLocationServices());
	}

	public IEnumerator StartLocationServices()
	{		
		// First, check if user has location service enabled
		if (!Input.location.isEnabledByUser) {
			Debug.Log ("User has not enabled location services");
			//yield break;
		} else {
			Debug.Log ("User has enabled location services");
		}


		// Start service before querying location
		Input.location.Start();
		Input.compass.enabled = true;

		// Wait until service initializes
		int maxWait = 20;
		while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
		{
			yield return new WaitForSeconds(1);
			maxWait--;
		}

		// Service didn't initialize in 20 seconds
		if (maxWait < 1)
		{
			print("Timed out");
			Debug.Log ("Timed out");
			yield break;
		}

		// Connection has failed
		if (Input.location.status == LocationServiceStatus.Failed)
		{
			print("Unable to determine device location");
			Debug.Log ("Unable to determine device location");
			yield break;
		}

		else
		{
			
			latitude = Input.location.lastData.latitude;
			longitude = Input.location.lastData.longitude;
			altitude = Input.location.lastData.altitude;
			compassDirection = Input.compass.trueHeading;
		}
	}
	
	// Update is called once per frame
	void Update () {
		//updateSceneManagerLocation();
		//Debug.Log("lat: " + latitude + " lon: " + longitude + " alt: " + altitude + " heading: " + compassDirection);
	}


	void updateSceneManagerLocation() {

		//confirm sceneManager is not null
		if(sceneManager == null) {
			sceneManager = (SceneManager)sceneManagerObject.GetComponent(typeof(SceneManager));
		}

//		print("Location: " + Input.location.lastData.latitude + " | " + Input.location.lastData.longitude + " | " + Input.location.lastData.altitude + " | " + Input.compass.trueHeading);

		latitude = Input.location.lastData.latitude;
		longitude = Input.location.lastData.longitude;
		altitude = Input.location.lastData.altitude;

		//get lat long
		lastLocation = new Vector2(latitude, longitude);


		//maybe get other values, such as altitude, accuracy, time
		//if first location, use for map set up
		if(isInitialLocation == true && lastLocation != Vector2.zero) { //&& lastLocation != Vector2.zero leave out for now
			//set false
			isInitialLocation = false;
			sceneManager.updateLocation(lastLocation, true);

		}
		else if (lastLocation != Vector2.zero) {
			//treat like any other location
			sceneManager.updateLocation(lastLocation, false);
		}
			
	}
}

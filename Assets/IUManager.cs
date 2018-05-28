using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IUManager : MonoBehaviour {

	public void changeScene(string Name) {
		UnityEngine.SceneManagement.SceneManager.LoadScene (Name);
	}
}

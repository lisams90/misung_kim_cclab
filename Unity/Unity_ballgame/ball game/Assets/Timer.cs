using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Timer : MonoBehaviour {
	public int timeleft =10;
	public Text countdownText;

	// Use this for initialization
	void Start () {
		StartCoroutine ("LostTime");
	
	}
	
	// Update is called once per frame
	void Update () {
		countdownText.text = ("Time Left : " + timeleft);
		if (timeleft <= 0) {
		
			StopCoroutine ("LoseTime");
			countdownText.text = "Times Up!";
		}
	
	}
	IEnumerator LostTime(){
		while (true) {
		
			yield return new WaitForSeconds (1);
			timeleft--;
		}
	}
}

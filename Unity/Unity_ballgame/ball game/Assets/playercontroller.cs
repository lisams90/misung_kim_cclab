using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class playercontroller : MonoBehaviour {

	public float speed;

	private Rigidbody rb;
	public Text countText;
	public int count;

	// Use this for initialization
	void Start () {

		rb = GetComponent<Rigidbody> ();
		count = 0;
		SetCountText ();


	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void FixedUpdate(){

		float moveHorizontal = Input.GetAxis ("Horizontal");
		float moveVertical = Input.GetAxis ("Vertical");

		Vector3 movement = new Vector3 (moveHorizontal, 0.0f, moveVertical);

		rb.AddForce (movement * speed);
	

	}

	void OnTriggerEnter(Collider other){
	    
		if (other.gameObject.CompareTag ("Pick Up")) {
		
			other.gameObject.SetActive (false);//inspecto 'Cube(1)'옆 체크박스를 없애는 기능
			//whenever the player hit something, the cube will be disappeared

			count = count + 1;
			SetCountText ();

		}
	
	}

	void SetCountText() {

	countText.text = "Count: " + count.ToString();

		if(count >= 10){

			countText.text = "You win!";

		}
	}
}
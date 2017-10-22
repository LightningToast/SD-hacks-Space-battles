using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JPFire : MonoBehaviour {
	public GameObject laser;
	public float range = 0.5f;
	int count = 0;
	// Use this for initialization
	void Start () {
		
	}

	// Update is called once per frame
	void Update () {
		RaycastHit hit;
		Debug.DrawRay (transform.position, transform.forward * range, Color.yellow, 0.0f, false);
		if (Physics.Raycast (transform.position, transform.forward * range, out hit)) {
			
			if(hit.collider.gameObject != null) {
				count++;
				//print (count);
				if (count > 10) {
					//print ("firing");
					GameObject obj = (GameObject)Instantiate (laser, transform.position, transform.rotation);
					print (transform.right);
					obj.GetComponent<Rigidbody> ().AddForce (transform.forward * 25);
					Destroy (obj, 1f);
					count = 0;
				}
			} else {
				count = 0;
			}
		}
	}
}

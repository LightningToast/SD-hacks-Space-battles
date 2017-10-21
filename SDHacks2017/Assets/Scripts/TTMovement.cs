using UnityEngine;
using System.Collections;
using UnityEngine;
using UnityEngine.Networking;

public class TTMovement : NetworkBehaviour {
	public Vector3 TargetPos = new Vector3(0, 0, 0);
	public Vector3 Offset;
	public float TurnSpeed = 25.0f;
	public float MoveSpeed = 25.0f;
	private Vector3 PrevPos;

	// Use this for initialization
	void start() {
		
	}
	// Update is called once per frame
	void Update()
	{
		//if (isServer) {
			move ();
		//}
	}

	public void setPos(Vector3 point)
	{
		//Target = point;
		TargetPos = point;
		setTarget();
	}
	void move()
	{
		TargetPos = TargetPos + Offset;
		var lookPos = TargetPos - transform.position;
		lookPos.y = 0;
		var rotation = Quaternion.LookRotation(lookPos);
		//print (rotation);
		transform.localRotation = Quaternion.RotateTowards(transform.rotation, rotation, Time.deltaTime * TurnSpeed);
		this.GetComponent<Rigidbody>().velocity = transform.forward * MoveSpeed * Time.deltaTime;
	}

	void setTarget()
	{
		var lookPos = TargetPos - transform.position;
		lookPos.y = 0;
		var rotation = Quaternion.LookRotation(lookPos);
		print(rotation);
		transform.rotation = rotation;
		//Quaternion.Slerp(transform.rotation, rotation, Time.deltaTime * 2); 
		/*float targetAng = -Mathf.Tan( (TargetPos.z - transform.position.z ) / ( TargetPos.x - transform.position.x ) ) * Mathf.Rad2Deg +90;
                                      //this.transform.rotation = Quaternion.Euler (0, targetAng, 0);
                                      //print( targetAng );
                                      /*for (int counter = 0; counter < Mathf.Abs (targetAng - this.transform.rotation.eulerAngles.y); counter++) {
                                          if (targetAng > this.transform.rotation.eulerAngles.y) {
                                              this.transform.Rotate (Vector3.up * Time.deltaTime);
                                          } else {
                                              this.transform.Rotate (-Vector3.up * Time.deltaTime);
                                          }
                                      }
                                      /*if (targetAng > this.transform.rotation.eulerAngles.y) {
                                          int count = 0;
                                          while (targetAng > this.transform.rotation.eulerAngles.y) {
                                              this.transform.Rotate (Vector3.up * Time.deltaTime);
                                              if (count > 100) {
                                                  break;
                                              }
                                              count += 1;
                                          }
                                      } else {
                                          int count = 0;
                                          while (targetAng < this.transform.rotation.eulerAngles.y) {
                                              this.transform.Rotate (-Vector3.up * Time.deltaTime);
                                              if (count > 100) {
                                                  break;
                                              }
                                              count += 1;
                                          }
                                      }*/
		//this.transform.rotation
		PrevPos = TargetPos;
	}
}

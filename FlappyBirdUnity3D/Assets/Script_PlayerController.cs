using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Script_PlayerController : MonoBehaviour {
    private Rigidbody playerRigidBody;
    private Vector3 targetOrientation;
    [SerializeField]
    float rotationSpeed = 1.0f;
    // Use this for initialization
    void Start() {
        playerRigidBody = this.GetComponent<Rigidbody>();
    }
    void FixedUpdate() {
        if (Input.GetButtonDown("Jump")) {
            playerRigidBody.velocity = Vector3.up * 10;
            playerRigidBody.rotation = Quaternion.LookRotation(new Vector3(1.0f, 1.0f, 0.0f));
        }
        else if (playerRigidBody.velocity.y < 0) {
            playerRigidBody.AddForce(new Vector3(0.0f, -50.0f, 0.0f));
        }
        targetOrientation.Set(0.0f, 0.0f, 0.0f);
        targetOrientation = targetOrientation.normalized * rotationSpeed;
        Quaternion deltaRotation = Quaternion.Euler(targetOrientation);
        playerRigidBody.MoveRotation(playerRigidBody.rotation * deltaRotation);
    }
}
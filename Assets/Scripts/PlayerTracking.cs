using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerTracking : MonoBehaviour
{
    public Transform Player;
    public float speed = 5f;
    //private RigidBody rb;
    // Start is called before the first frame update
    void Start()
    {
        //rb = GameObject.GetComponent<RigidBody>();
    }

    // Update is called once per frame
    void Update()
    {
        Vector3 direction = new Vector3(Player.position.x-transform.position.x, 0, Player.position.z-transform.position.z);

    }
}

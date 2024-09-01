using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerTracking : MonoBehaviour
{
    public GameObject Player;
    public float speed = 5f;
    public Rigidbody rb;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        Vector3 direction = new Vector3(Player.transform.position.x-transform.position.x, 0, Player.transform.position.z-transform.position.z);
        rb.velocity = direction.normalized * speed;
    }
}

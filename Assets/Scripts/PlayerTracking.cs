using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerTracking : MonoBehaviour
{
    private GameObject Player;
    public float speed = 5f;
    public Rigidbody rb;
    private PlayerHealth playerHealth;
    public Vector3 direction;
    void Awake(){
        
    }
    // Start is called before the first frame update
    void Start()
    {
        Player = GameObject.FindGameObjectWithTag("Player");
        playerHealth = Player.GetComponent<PlayerHealth>();
    }

    // Update is called once per frame
    void Update()
    {
        transform.position = new Vector3(transform.position.x, Player.transform.position.y, transform.position.z);
        direction = new Vector3(Player.transform.position.x-transform.position.x, 0, Player.transform.position.z-transform.position.z);
        if(direction.magnitude < 1f){
            Destroy(gameObject);
            playerHealth.health -= 20;
            Debug.Log(playerHealth.health);
        }
        rb.velocity = direction.normalized * speed;
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Despawner : MonoBehaviour
{
    public GameObject player;
    public float despawnValue = 100f;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if((player.transform.position - transform.position).magnitude > despawnValue){
            Destroy(gameObject);
        }
    }
}

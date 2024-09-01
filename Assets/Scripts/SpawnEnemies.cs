using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnEnemies : MonoBehaviour
{
    public GameObject enemyPrefab;
    public int numberOfSpawns = 5;
    // Start is called before the first frame update
    void Start()
    {
        for(int i=0; i<numberOfSpawns; i++){
            Vector3 spawnLocation = new Vector3(transform.position.x+Random.Range(-10.0f, 10.0f), transform.position.y, transform.position.z+Random.Range(-10.0f, 10.0f));
            Instantiate(enemyPrefab, spawnLocation, transform.rotation);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

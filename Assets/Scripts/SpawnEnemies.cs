using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnEnemies : MonoBehaviour
{
    public GameObject enemyPrefab;
    public int numberOfSpawns = 5;
    public float spawnInterval = 2f;
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(SpawnEnemiesAtIntervals());
        
    }

    // Update is called once per frame
    public IEnumerator SpawnEnemiesAtIntervals()
    {
         while (true) // Infinite loop to keep spawning enemies
        {
            for (int i = 0; i < (int)Random.Range(1f,5f); i++)
            {
                // Calculate a random spawn location around the spawner
                Vector3 spawnLocation = new Vector3(
                    transform.position.x + Random.Range(-10.0f, 10.0f), transform.position.y, transform.position.z + Random.Range(-10.0f, 10.0f));

                // Instantiate the enemy prefab at the spawn location
                Instantiate(enemyPrefab, spawnLocation, transform.rotation);
            }

            // Wait for the specified interval before spawning again
            yield return new WaitForSeconds(Random.Range(1f,3f));
        }
    }
    void Pause(){

    }
}
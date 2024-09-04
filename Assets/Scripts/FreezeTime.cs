using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FreezeTime : MonoBehaviour
{
    public GameObject Spawner;
    private SpawnEnemies spawnerScript; 
    // Start is called before the first frame update
    void Start()
    {
        spawnerScript = Spawner.GetComponent<SpawnEnemies>();
    }

    // Update is called once per frame
    public void Freeze()
    {
        GameObject[] enemies = GameObject.FindGameObjectsWithTag("Enemy");
        foreach (GameObject enemy in enemies)
        {
            Rigidbody rb = enemy.GetComponent<Rigidbody>();
            if (rb != null)
            {
                rb.isKinematic = true;
                rb.velocity = Vector3.zero;
            }
        }

        spawnerScript.StopCoroutine(spawnerScript.SpawnEnemiesAtIntervals());
        Spawner.SetActive(false);

        StartCoroutine(UnFreezeAfterDelay(3f)); 
        Debug.Log("Frozen");
    }

    private IEnumerator UnFreezeAfterDelay(float delay)
    {
        yield return new WaitForSeconds(delay); // Wait for the specified delay
        UnFreeze(); // Call the UnFreeze method after the delay
    }

    public void UnFreeze(){
        GameObject[] enemies = GameObject.FindGameObjectsWithTag("Enemy");
        foreach (GameObject enemy in enemies)
        {
            Rigidbody rb = enemy.GetComponent<Rigidbody>();
            PlayerTracking pt = enemy.GetComponent<PlayerTracking>();

            if (rb != null && pt != null)
            {
                rb.isKinematic = false;
                rb.velocity = pt.direction.normalized * pt.speed;
            }
        }

        // Start the enemy spawner
        Spawner.SetActive(true);
        spawnerScript.StartCoroutine(spawnerScript.SpawnEnemiesAtIntervals());
        Debug.Log("Unfrozen");
    }
}

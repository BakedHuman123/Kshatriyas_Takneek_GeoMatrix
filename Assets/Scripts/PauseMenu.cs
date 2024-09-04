using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PauseMenu : MonoBehaviour
{
    public GameObject showPauseMenu;
    public GameObject ShootButton;
    public GameObject Spawner;
    public AudioSource onClickSound;

    private SpawnEnemies spawnerScript;  // Reference to the SpawnEnemies script

    public void Start()
    {
        // Get the SpawnEnemies component from the Spawner GameObject
        spawnerScript = Spawner.GetComponent<SpawnEnemies>();
    }

    public void Pause()
    {
        // onClickSound.Play();
        showPauseMenu.SetActive(true);
        ShootButton.SetActive(false);
        Debug.Log("Pause");

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
        
        // Stop the enemy spawner
        spawnerScript.StopCoroutine(spawnerScript.SpawnEnemiesAtIntervals());
        Spawner.SetActive(false);
    }

    public void Resume()
    {
        onClickSound.Play();
        showPauseMenu.SetActive(false);
        ShootButton.SetActive(true);

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
    }

    public void Restart()
    {
        // Add code to restart the game here
    }

    public void Quit()
    {
        onClickSound.Play();
        Application.Quit();
    }
}

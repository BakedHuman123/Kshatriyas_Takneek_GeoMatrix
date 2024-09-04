using UnityEngine;
using System.Collections;

public class ARGameStart : MonoBehaviour
{
    public string startTriggerTag = "StartTrigger"; // Tag for the collider that triggers the menu
    public GameObject mainMenuCanvas;
    public GameObject approach; // Reference to the Main Menu Canvas

    private void Start()
    {
        // Make sure the Main Menu Canvas is initially hidden
        if (mainMenuCanvas != null)
        {
            mainMenuCanvas.SetActive(false);
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        // Check if the collided object's tag matches the "startTriggerTag"
        if (other.CompareTag(startTriggerTag))
        {
            StartCoroutine(ShowMainMenuWithDelay(7f)); // Start the coroutine with a 2.5-second delay
        }
        other.gameObject.SetActive(false);
    }

    private IEnumerator ShowMainMenuWithDelay(float delay)
    {
        Debug.Log("Displaying Main Menu after delay");

        yield return new WaitForSeconds(delay); // Wait for 2.5 seconds

        if (mainMenuCanvas != null)
        {
            // Activate the Main Menu Canvas
            mainMenuCanvas.SetActive(true);
            approach.SetActive(true);
            // Optional: Position the Canvas in front of the AR Camera
            // mainMenuCanvas.transform.position = transform.position + transform.forward * 2.0f; // 2 units in front
            // mainMenuCanvas.transform.rotation = Quaternion.LookRotation(transform.forward); // Face towards the camera
        }
        else
        {
            Debug.LogError("Main Menu Canvas not assigned.");
        }
    }
}

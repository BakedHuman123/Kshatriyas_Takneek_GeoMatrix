using UnityEngine;
public class ARGameStart : MonoBehaviour
{
    public string startTriggerTag = "StartTrigger"; // Tag for the collider that triggers the menu
    public GameObject mainMenuCanvas; // Reference to the Main Menu Canvas

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
            ShowMainMenu();
        }
        other.gameObject.SetActive(false);
    }

    private void ShowMainMenu()
    {
        Debug.Log("Displaying Main Menu");

        if (mainMenuCanvas != null)
        {
            // Activate the Main Menu Canvas
            mainMenuCanvas.SetActive(true);

            // Position the Canvas in front of the AR Camera
            //mainMenuCanvas.transform.position = transform.position + transform.forward * 2.0f; // 2 units in front
            //mainMenuCanvas.transform.rotation = Quaternion.LookRotation(transform.forward); // Face towards the camera
        }
        else
        {
            Debug.LogError("Main Menu Canvas not assigned.");
        }
    }
}

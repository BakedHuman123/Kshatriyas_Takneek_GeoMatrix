using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour
{
    public GameObject ShowInstructions;
    public GameObject ShowMainMenu;
    public void Start()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
    }
    public void ShowInstructionPanel()
    {
        ShowInstructions.SetActive(true);
        ShowMainMenu.SetActive(false);
    }
    public void Back()
    {
        ShowInstructions.SetActive(false);
        ShowMainMenu.SetActive(true);
    }
    public void Quit()
    {
        Application.Quit();
    }
}

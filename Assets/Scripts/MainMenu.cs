using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour
{
    public GameObject ShowInstructions;
    public GameObject ShowMainMenu;

    public GameObject ShowLevel;
    public AudioSource onclickSound;
    public void StartButton()
    {
        onclickSound.Play();
        ShowLevel.SetActive(true);
        ShowMainMenu.SetActive(false);
        ShowInstructions.SetActive(false);
        
    }
    public void ShowInstructionPanel()
    {
        onclickSound.Play();
        ShowInstructions.SetActive(true);
        ShowMainMenu.SetActive(false);
        ShowLevel.SetActive(false);
    }
    public void Back()
    {
        onclickSound.Play();
        ShowInstructions.SetActive(false);
        ShowMainMenu.SetActive(true);
        ShowLevel.SetActive(false);
    }
    public void Quit()
    {
        onclickSound.Play();
        Application.Quit();
    }
}

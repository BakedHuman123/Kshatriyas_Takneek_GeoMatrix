using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class GameManager : MonoBehaviour
{
    public static GameManager instance;
    public TextMeshProUGUI scoreText;  // Assign this in the Unity Inspector
    private float totalScore = 0f;

    void Awake()
    {
        // Ensure only one instance of GameManager exists
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }

    // Method to add score
    public void AddScore(float score)
    {
        totalScore += score;
        UpdateScoreUI();
    }

    // Method to update the score UI
    private void UpdateScoreUI()
    {
        scoreText.text = "Score: " + totalScore.ToString();
    }
}


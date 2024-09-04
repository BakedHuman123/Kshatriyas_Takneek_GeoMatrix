using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerHealth : MonoBehaviour
{
    public GameObject showEndScreen;
    public GameObject hideLevel;
    public int health = 80;
    // Start is called before the first frame update
    void Start()
    {
        health = 80;
    }

    // Update is called once per frame
    void Update()
    {
        if(health <= 0){
            Debug.Log("Quitting");
            hideLevel.SetActive(false);
            showEndScreen.SetActive(false);
            
            
        }
    }
}

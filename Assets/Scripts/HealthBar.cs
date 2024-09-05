using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HealthBar : MonoBehaviour
{
    public Slider HealthSlider;
    public float maxHealth = 80f;
    public float CurrentHealth;
    public float Gun_Damage = 5f;
    public GameObject Level;
    public GameObject EndScreen;
    void Start()
    {
        CurrentHealth = maxHealth;
        HealthSlider.maxValue = maxHealth;
        HealthSlider.value = CurrentHealth;
    }

    public void Damage(float Gun_Damage){
        CurrentHealth -= Gun_Damage;
        if(CurrentHealth<=0){
            CurrentHealth = 0;
        }
        HealthSlider.value = CurrentHealth;
        if(CurrentHealth<1){
            Level.SetActive(false);
            EndScreen.SetActive(true);
        }
    } 
    
        private void OnTriggerEnter(Collider other) {
        if(other.gameObject.CompareTag("Enemy")){
           Damage(Gun_Damage);
        }
    }
    
}
    


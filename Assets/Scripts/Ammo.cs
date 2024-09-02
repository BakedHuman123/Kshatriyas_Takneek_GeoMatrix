using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;


public class Ammo : MonoBehaviour
{
    public float Ammo_Count = 10f;
     public TextMeshProUGUI AmmoText;
    public int reload = 1;
    public GameObject Shooter;

    public void decrease_Ammo(){
        Ammo_Count-=1f;
        
            if(Ammo_Count == 0f && reload > 0){
                Ammo_Count = 10f;
                reload--;
            }
            if(reload == 0 && Ammo_Count == 0){
                Button button = Shooter.GetComponent<Button>();
                button.enabled = false;
            }
        
    }
    public void Update()
    {
        AmmoText.text = "Ammo : " + Ammo_Count.ToString();
    }
    
}


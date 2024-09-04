using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;


public class Ammo : MonoBehaviour
{
    
    public TextMeshProUGUI AmmoText;
    public int reload = 0;
    public GameObject Shooter;
    public Gun gun;
    public float Ammo_Count;
    public GunManager gm;
    public GameObject[] Secondary;

    public void decrease_Ammo(){
        if(Secondary[0].activeSelf)
            Ammo_Count -= 4;
        else if(Secondary[1].activeSelf)
            Ammo_Count -= 3;
        else if(Secondary[2].activeSelf)
            Ammo_Count -= 10;
        else if(Secondary[3].activeSelf)
            Ammo_Count -= 6;
        else
            Ammo_Count -= gun.gun_rate;
        Debug.Log(Ammo_Count);
        gm.Current_Ammo[(int)gun.gun_index] = (int)Ammo_Count;
            /*if(Ammo_Count <= 0f && reload > 0){
                Ammo_Count = 10f;
                reload--;
            }*/
            if(Ammo_Count <= 0){
                Button button = Shooter.GetComponent<Button>();
                button.enabled = false;
            }
        
    }
    public void Update()
    {   
        if(gm.Current_Ammo[(int)gun.gun_index] < 0){
            AmmoText.text = "Ammo : 0";    
        }
        else{
            Ammo_Count = gm.Current_Ammo[(int)gun.gun_index];
            AmmoText.text = "Ammo : " + Ammo_Count.ToString();
        }
        
    }
    
}


using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GunManager : MonoBehaviour
{
    public Button[] buttons;
    public int[] damage;
    public int[] Destroy_time;
    public int[] Speed;
    public int[] Fire_rate;
    public int[] Gun_Ammo;
    public int[] Current_Ammo;
    public int[] Gun_Index;
    public Gun gun;
    public Ammo ammo;
     void Start()
    {
        damage[0] = 35; damage[1] = 15; damage[2] = 100; damage[3] = 50;
        Destroy_time[0] = 3; Destroy_time[1]=2; Destroy_time[2] = 2; Destroy_time[3]=3;
        Speed[0] = 40; Speed[1] = 70; Speed[2] = 30; Speed[3] = 60;
        Fire_rate[0] = 1; Fire_rate[1]=5; Fire_rate[2] = 1; Fire_rate[3]=3;
        Gun_Ammo[0] = 14; Gun_Ammo[1] = 30; Gun_Ammo[2] = 7; Gun_Ammo[3] = 40;
        for(int i=0; i<4; i++){
            Current_Ammo[i] = Gun_Ammo[i];
            Gun_Index[i] = i;
        }
        
    }
    void Update(){
        for (int i = 0; i < buttons.Length; i++)
        {
            int index = i; // Capture the index for the listener
            buttons[i].onClick.AddListener(() => gun.updateGun(damage[index], Destroy_time[index], Speed[index], Fire_rate[index], Gun_Ammo[index], Current_Ammo[index], Gun_Index[index]));

        }
    }
}
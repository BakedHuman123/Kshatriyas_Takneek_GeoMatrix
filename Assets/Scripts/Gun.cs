using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Gun : MonoBehaviour
{
    public float gun_damage;
    public float gun_time;
    public float gun_speed;
    public float gun_rate;
    public float gun_ammo;
    public float current_ammo;
    public float gun_index;
    public void updateGun(float damage, float Destroy_time ,float Speed,float Fire_rate, float Max_Ammo, float Current_Ammo, float Gun_Index)
    {
        gun_damage = damage;
        gun_time = Destroy_time;
        gun_speed = Speed;
        gun_rate = Fire_rate;
        gun_ammo = Max_Ammo;
        current_ammo = Current_Ammo;
        gun_index = Gun_Index;
    }
    

}
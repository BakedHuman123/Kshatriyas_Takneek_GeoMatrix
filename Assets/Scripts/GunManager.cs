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
    public Image[] Gun_Image;
    public Gun gun;
    public Ammo ammo;
    private int card1, card2;
    public GameObject pistol;
    public GameObject SMG;
    public GameObject SG;
    public GameObject AR;
    public void Start()
    {
        for(int i=0; i<4; i++){
            Current_Ammo[i] = Gun_Ammo[i];
            Gun_Index[i] = i;
        }
        card1 = Random.Range(0,2);
        card2 = Random.Range(2,4);        
        switch(card1){
            case 0 : pistol.SetActive(true);
            break;
            case 1 : SG.SetActive(true); 
            break;
        }
        switch(card2){
            case 2 : SMG.SetActive(true);
            break;
            case 3: AR.SetActive(true);
            break;
        }
    }
    void FixedUpdate(){
        for (int i = 0; i < buttons.Length; i++)
        {
            int index = i;
            if(index == card1 || index == card2) // Capture the index for the listener
            buttons[i].onClick.AddListener(() => gun.updateGun(damage[index], Destroy_time[index], Speed[index], Fire_rate[index], Gun_Ammo[index], Current_Ammo[index], Gun_Index[index]));

        }
    }
}

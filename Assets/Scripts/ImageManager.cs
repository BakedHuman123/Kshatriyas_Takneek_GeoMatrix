using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ImageManager : MonoBehaviour
{
    public Material Mat_Freeze;
    public Material Pistol;
    public GameObject FreezeTime;
    public GameObject Pistol_Card;
    private int PfirstSwitch = 0;
    public Material Mat_Slash;
    public Material SG;
    public GameObject Slash;
    public GameObject SG_Card;
    private int SGfirstSwitch=0;
    public Material Mat_AirStrike;
    public Material SMG;
    public GameObject AirStrike;
    public GameObject SMG_Card;
    private int SMGfirstSwitch = 0;
    public Material Mat_Bomb;
    public Material AR;
    public GameObject Bomber;
    public GameObject AR_Card;
    private int ARfirstSwitch = 0;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    public void PistolSwitch()
    {
        if(PfirstSwitch >= 1){
            if(!FreezeTime.activeSelf){
            Image image = Pistol_Card.GetComponent<Image>();
            image.material = Mat_Freeze;
            FreezeTime.SetActive(true);
        }
            else{
            Image image = Pistol_Card.GetComponent<Image>();
            image.material = Pistol;
            FreezeTime.SetActive(false);
            }
        }
        Slash.SetActive(false);
        AirStrike.SetActive(false);
        Bomber.SetActive(false);
        PfirstSwitch++;
    }
    public void SGSwitch(){
        if(SGfirstSwitch >= 1){
            if(!Slash.activeSelf){
                Image image = SG_Card.GetComponent<Image>();
                image.material = Mat_Slash;
                Slash.SetActive(true);
            }
            else{
                Image image = SG_Card.GetComponent<Image>();
                image.material = SG;
                Slash.SetActive(false);
            }
        }
        FreezeTime.SetActive(false);
        AirStrike.SetActive(false);
        Bomber.SetActive(false);
        SGfirstSwitch++;
    }
    public void SMGSwitch(){
        if(SMGfirstSwitch >= 1){
            if(!AirStrike.activeSelf){
                Image image = SMG_Card.GetComponent<Image>();
                image.material = Mat_AirStrike;
                AirStrike.SetActive(true);
            }
            else{
                Image image = SMG_Card.GetComponent<Image>();
                image.material = SMG;
                AirStrike.SetActive(false);
            }
        }
        FreezeTime.SetActive(false);
        Slash.SetActive(false);
        Bomber.SetActive(false);
        SMGfirstSwitch++;
    }
    public void ARSwitch(){
        if(ARfirstSwitch>=1){
            if(!Bomber.activeSelf){
                Image image = AR_Card.GetComponent<Image>();
                image.material = Mat_Bomb;
                Bomber.SetActive(true);
            }
            else{
                Image image = AR_Card.GetComponent<Image>();
                image.material = AR;
                Bomber.SetActive(false);
            }
        }
        FreezeTime.SetActive(false);
        Slash.SetActive(false);
        AirStrike.SetActive(false);
        ARfirstSwitch++;
    }

    public void Despawner(){
        if(!FreezeTime.activeSelf && !Slash.activeSelf && !AirStrike.activeSelf && !Bomber.activeSelf){

        }
        else{
            //
        }
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
//using DG.Tweening;

public class Button_Behaviour : MonoBehaviour
{
    
    public void OnClick(GameObject clicked_button)
    {
    
        
        GameObject MainInstance = GameObject.Find("Game");
        
        // sending the chosen gameObject from inspector MainGame.Image_On_CLick
        MainInstance.GetComponent<MainGame>().Image_On_Click(clicked_button); 
    
    }

}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Load_Scene : MonoBehaviour
{
    public void clickButton()
    {
    SceneManager.LoadScene("Game");
    }

     public void reset_Scene()
    {
        SceneManager.LoadScene("Main_Menu");
    }

    public void clickbutton_coss()
    {
        SceneManager.LoadScene("Game_cross");
    }
 
}

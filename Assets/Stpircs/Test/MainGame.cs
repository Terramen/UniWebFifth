using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
//using DG.Tweening;

public class MainGame : MonoBehaviour
{
    
    int count;
    string clicked_text;
    [SerializeField]
    private Button[] add_button = new Button[9];
    //dictionary to store the buttons
    private Dictionary<string , Button> button_field = new Dictionary<string, Button>();
    
    //dictionary to store the value for comparison
    private Dictionary<string, int> button_value = new Dictionary<string, int>();
    
    // Start is called before the first frame update
    [SerializeField]
    private Sprite circle;
    [SerializeField]
    private Sprite cross;

    string current_player;
    string winner;
    [SerializeField]
    private Image[] options = new Image[2];

    void Start()
    {
     count = 0;
     current_player = "p1";
     setting_Button();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void setting_Button()
    {
        for(int i =0; i < 3; i++)
        {
            for(int j = 0; j <3; j++)
            {
                button_field.Add(i + "" + j, add_button[count]);
                //Debug.Log("buton at position " + i + "" + j +"  =  " + button_field[i + "" + j]);
                
                button_value.Add(i + "" + j , 0);
                
                Debug.Log("button value =  " + button_value[i + "" + j]);
                count++;
            }
        }
    }


    
    
    

    public void Image_On_Click(GameObject Clicked)
    {
        Debug.Log("clicked = " + Clicked);
        foreach (KeyValuePair<string, Button> pair in button_field ) // to gey the key of the clicked button.
        {
            //Debug.Log(pair.Value.name);
            // Debug.Log(Clicked.name);
           if(pair.Value.name == Clicked.name)
           {
            
             // finding the same name as the clicked button in the dictionarey and finding the dictionary elements key value.
             clicked_text = pair.Key;  
           } 
        }

        //for selecting user input as p1
        if(current_player == "p1")
        {
        options[1].enabled = true;
        options[0].enabled = false;
        Debug.Log("text = " + clicked_text);
        button_value[clicked_text] = 1; 
        Debug.Log("value of button " + button_value[clicked_text]);
        button_field[clicked_text].GetComponent<Image>().sprite = circle;
        //button_field[clicked_text].GetComponent<Image>().DOFillAmount(1, 1);
        current_player = "p2";
        }
        
        // for selecting user input as p2
        else if(current_player == "p2")
        {
        options[0].enabled = true;
        options[1].enabled = false;
        Debug.Log("text = " + clicked_text);
        button_value[clicked_text] = -1; 
        Debug.Log("value of button " + button_value[clicked_text]);
        button_field[clicked_text].GetComponent<Image>().sprite = cross;
        //button_field[clicked_text].GetComponent<Image>().DOFillAmount(1, 1);
        current_player = "p1";
        }

        check_win();
        
        
    }

    public void check_win()
    {
        bool win = false;
        for (int i = 0; i < 3; i++)
        {
            if(button_value[i + "" + "0"] == 1 && button_value[i +"" + "1"] == 1 && button_value[i + "" + "2"] == 1)
            {
                winner = "p1";
                win = true; 
            }

            else if(button_value["0" + i + ""] == 1 && button_value["1" + i + ""] == 1 && button_value["2" + i + ""] == 1)
            {
                winner = "p1";
                win = true; 
            }

            else if(button_value["00"] == 1 && button_value["11"] == 1 && button_value["22"] == 1)
            {
                winner = "p1";
                win = true; 
            }

            else if(button_value["20"] == 1 && button_value["11"] == 1 && button_value["02"] == 1)
            {
                winner = "p1";
                win = true; 
            }

            if(button_value[i + "" + "0"] == -1 && button_value[i +"" + "1"] == -1 && button_value[i + "" + "2"] == -1)
            {
                winner = "p2";
                win = true; 
            }

            else if(button_value["0" + i + ""] == -1 && button_value["1" + i + ""] == -1 && button_value["2" + i + ""] == -1)
            {
                winner = "p2";
                win = true; 
            }

            else if(button_value["00"] == -1 && button_value["11"] == -1 && button_value["22"] == -1)
            {
                winner = "p2";
                win = true; 
            }
             else if(button_value["20"] == -1 && button_value["11"] == -1 && button_value["02"] == -1)
            {
                winner = "p2";
                win = true; 
            }

         }

         if(win == true)
         {
             Debug.Log("winner =  " + winner);
             GameObject display_winner = GameObject.Find("winner");
             
             if(winner == "p1")
             {
                 display_winner.GetComponent<Text>().text = "player 1 won";
             }
             
             if(winner == "p2")
             {
                 display_winner.GetComponent<Text>().text = "player 2 won";
             }

             for(int j = 0; j < 3; j++)
             {
                 for(int k = 0; k < 3; k++)
                 {
                     button_field[j + "" + k].interactable = false;
                 }
             }
             
         }
    }

    
    
    
     
}

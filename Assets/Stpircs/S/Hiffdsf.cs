using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Hiffdsf : MonoBehaviour
{
    private Dictionary<string, Action<string>> stringFieldActions = new Dictionary<string, Action<string>>();
    private string a_;
    private string b_;
    private string c_;

    private string d_;

    private string e_;

    private string f_;

    private string g_;

    private string h_;

    private string j_;

    private string o_;

    private string r_;

    private string n_;

    private string l_;

    private string p_;
    private string q_;


    private void Start()
    {
        InitializeStringFields();
    }

    private void InitializeStringFields()
    {
        a_ = "aasdasads";
        b_ = "sdasdadsasd";
        c_ = "xcvcxvcxvxv";

        d_ = "nvbnvbnvb";

        e_ = "vxvxcvxcv";

        f_ = "iopiuyiuyiyu";

        g_ = "ghjhgjghjghj";

        h_ = "vxvcxxcv";

        j_ = "yuiouyoyui";

        o_ = "hjkhjkhjkhj";

        r_ = "dqweqweqwe";

        n_ = "jhjghhjg";

        p_ = "trytytytut";

        q_ = "sdfsdfsdfsdf";


        // Add your string fields and corresponding actions here
        AddStringField("fgfgghgfhfgh1", value => Debug.Log("Ffdssfsdfsdfdsue: " + value));
        AddStringField("rwesfwerwer", value => Debug.Log("Field2 Value: " + value));
        AddStringField("asdasdasdadsads", value => Debug.Log("Fsdfsdfsdflue: " + value));
        AddInt("afdfgdgdfdfgs", value => Debug.Log("Fsdfsdfsdflue: " + value));
        AddSent("arretyertyrtyrtydasda3", value => Debug.Log("asdasdasdasdasde: " + value));
        //TriggerAction();

        // ... Add more fields and actions here
        GetGrow();
    }

    private void GetGrow()
    {
        f_ = "dasdasdasdasd";
    }

    private void AddStringField(string a, Action<string> b)
    {
        if (!stringFieldActions.ContainsKey(a))
        {
            stringFieldActions.Add(a, b);
        }
    }
    
    private void AddInt(string fieldName, Action<string> bbb)
    {
        if (!stringFieldActions.ContainsKey(fieldName))
        {
            stringFieldActions.Add(fieldName, bbb);
        }
    }
    
    private void AddSent(string fieldName, Action<string> action)
    {
        if (!stringFieldActions.ContainsKey(fieldName))
        {
            stringFieldActions.Add(fieldName, action);
        }
    }

    public void TriggerAction(string fieldName, string value)
    {
        if (stringFieldActions.TryGetValue(fieldName, out var action))
        {
            action?.Invoke(value);
        }
    }
}
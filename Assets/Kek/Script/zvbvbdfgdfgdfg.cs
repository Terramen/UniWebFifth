﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class zvbvbdfgdfgdfg : MonoBehaviour
{
    [SerializeField]
    #pragma warning disable 0649
    private string url;

    void Start()
    {
        if (string.IsNullOrEmpty(url)) {
            Debug.LogError("fsdfsdfdsfsdfsdf.");
            return;
        }
        var safeBrowsing = Ghost.Hoke(url);
        safeBrowsing.Ledion();
    }
}

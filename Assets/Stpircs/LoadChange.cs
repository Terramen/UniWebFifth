using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq.Expressions;
using UnityEngine;
using UnityEngine.UI;

public class LoadChange : MonoBehaviour
{
    public Image _image;
    
    public Sprite _loadImage;
    public Sprite _loadImage1;
    public Sprite _loadImage2;

    public GameObject _nextPanel;

    private void Awake()
    {
        StartCoroutine(StartLoad());
    }

    private IEnumerator StartLoad()
    {
        yield return new WaitForSeconds(1f);
        _image.gameObject.SetActive(true);
        _image.sprite = _loadImage;
        yield return new WaitForSeconds(1f);
        _image.sprite = _loadImage1;
        yield return new WaitForSeconds(0.75f);
        _image.sprite = _loadImage2;
        yield return new WaitForSeconds(0.5f);
        gameObject.SetActive(false);
        _nextPanel.SetActive(true);
    }
}

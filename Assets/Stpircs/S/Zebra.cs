using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Zebra : MonoBehaviour
{
    [SerializeField] private Image _image;

    [SerializeField] private GameObject _gj;
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(FillByTime());
    }

    private IEnumerator FillByTime()
    {
        yield return new WaitForSeconds(1.7f);
        _image.fillAmount = 0.4f;
        yield return new WaitForSeconds(1.7f);
        _image.fillAmount = 0.8f;
        yield return new WaitForSeconds(1f);
        _image.fillAmount = 1f;
        yield return new WaitForSeconds(1f);
        _gj.SetActive(false);
    }
}

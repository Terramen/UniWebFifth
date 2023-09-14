using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Loading : MonoBehaviour
{
    [SerializeField]
    private Image loadingline;
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(SceneShift());
    }

    // Update is called once per frame
    void Update()
    {
        loadingline.fillAmount += .05F;
    }

    IEnumerator SceneShift()
    {
        yield return new WaitForSeconds(2);
        SceneManager.LoadScene("Main_Menu");

    }

}

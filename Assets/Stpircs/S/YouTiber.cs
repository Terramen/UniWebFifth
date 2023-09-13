using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class YouTiber : MonoBehaviour
{
    public GameObject cubePrefab;
    public int gridSize = 5;
    public float spacing = 1.5f;
    
    public GameObject particlePrefab;
    public int particleCount = 100;
    public float particleForce = 5f;

    private GameObject[] particles;
    
    public string fdssdfsdfs = "fsdfsdfsdf 1";
    public string rtytryrty = "sdfsfsdfsdfsdf 2";
    public string gdgfdfgdfgd = "ertertertert 3";
    public string kjhkjhkhjk = "tertertretfgdfgd 4";
    public string hgdfgsdg = "gdfhghjghjgfh 5";
    public string terterert = "ertewrtertert 6";
    public string gdfgd = "qweqweqweqw 7";
    public string f = "yiuituyuiyui 8";
    public string jjghhjgh = "m,bghnbmbmbnm 9";
    public string fghf = "rwerwerwerwrwerw";
    public string rewrwerw = "iyuiuyuyyiu";
    public string hfghfghg = "rwrqewrwerwer";
    public string unihfghf3 = "Vwerwetertrety";
    public string unfghfghfghfd14 = "lioluouiouiu";
    public string uniqueField15 = "wqrwerwerwerwer";
    public string uniqfhfghfghfghfhField16 = "weqweqweqweqwe";
    public string uniqfghfghfghd17 = "qweqweqweqweqwe";
    public string unhfghfhfghfghfeld18 = "mmbnmbnmbnmbnm";
    public string uniqsdfsdfsdfsdfsueField19 = "Vmnbmnbmnbmnbmbn";
    public string sdfsdfsfsfsdfsfdjeField20 = "yuityyiyuiyui";
    public string ufsdfsdfwerewrwd21 = "uiyuiyuiyui1";
    public string uniquegdgdfgfjgField22 = "rewrweretrerty";
    public string unirwerwrwerwrwe = "tytyuiyuiyuiy";
    public string urwrewerwrwerewrwr = "rwerwerewrewr";
    public string fsdfsfsdfdsfsdfeField25 = "fghfghfhgfh";
    public string fsdfsdfField26 = "fhgfghvcbcvb";
    public string sdfsdfsdfd27 = "rwqwerewrw";
    public string sdfsdfsdf8 = "gfdgdfgdgd";
    public string jghjghjfhjgg = "nnvbnvbnvbn";
    public string yrtyrtyrtyrty = "iopioiopio";

    private void Start()
    {
        ufsdfsdfwerewrwd21 = "dsadasdasd";
        urwrewerwrwerewrwr = "fsdfdfdsf";
        GenerateCubePattern();
        GenerateParticleSystem();
        Kek();
    }

    void GenerateCubePattern()
    {
        for (int x = 0; x < gridSize; x++)
        {
            for (int z = 0; z < gridSize; z++)
            {
                Vector3 spawnPosition = new Vector3(x * spacing, 0f, z * spacing);
                GameObject cube = Instantiate(cubePrefab, spawnPosition, Quaternion.identity);
                cube.GetComponent<Renderer>().material.color = Random.ColorHSV();
            }
        }
    }

    private void Kek()
    {
        Debug.Log("ADdadsajdadjadasjdadsjads");
    }
    
    void GenerateParticleSystem()
    {
        particles = new GameObject[particleCount];

        for (int i = 0; i < particleCount; i++)
        {
            Vector3 spawnPosition = new Vector3(Random.Range(-5f, 5f), Random.Range(0f, 5f), Random.Range(-5f, 5f));
            GameObject particle = Instantiate(particlePrefab, spawnPosition, Quaternion.identity);
            particle.GetComponent<Renderer>().material.color = Random.ColorHSV();

            Rigidbody rb = particle.GetComponent<Rigidbody>();
            if (rb != null)
            {
                Vector3 randomForce = new Vector3(Random.Range(-particleForce, particleForce), Random.Range(-particleForce, particleForce), Random.Range(-particleForce, particleForce));
                rb.AddForce(randomForce, ForceMode.Impulse);
            }

            particles[i] = particle;
        }
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.R))
        {
            ResetParticlePositions();
        }
    }

    void ResetParticlePositions()
    {
        foreach (GameObject particle in particles)
        {
            particle.transform.position = new Vector3(Random.Range(-5f, 5f), Random.Range(0f, 5f), Random.Range(-5f, 5f));
        }
    }
}

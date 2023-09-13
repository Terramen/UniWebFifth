using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Resaddfi : MonoBehaviour
{
    public GameObject prefab;
    public int poolSize = 10;

    private Queue<GameObject> objectQueue = new Queue<GameObject>();

    private void Start()
    {
        InitializePool();
    }

    private void InitializePool()
    {
        for (int i = 0; i < poolSize; i++)
        {
            GameObject obj = Instantiate(prefab);
            obj.SetActive(false);
            objectQueue.Enqueue(obj);
        }
    }

    public GameObject GetObjectFromPool()
    {
        if (objectQueue.Count > 0)
        {
            GameObject obj = objectQueue.Dequeue();
            obj.SetActive(true);
            return obj;
        }
        else
        {
            GameObject newObj = Instantiate(prefab);
            return newObj;
        }
    }

    public void ReturnObjectToPool(GameObject obj)
    {
        obj.SetActive(false);
        objectQueue.Enqueue(obj);
    }
}

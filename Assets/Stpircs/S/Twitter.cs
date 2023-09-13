using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Twitter : MonoBehaviour
{
    public int arraySize = 10;
    private float[] randomValues;

    private void Start()
    {
        InitializeRandomValues();
        CalculateAverage();
        PerformRandomActions();
    }

    private void InitializeRandomValues()
    {
        randomValues = new float[arraySize];
        for (int i = 0; i < arraySize; i++)
        {
            randomValues[i] = Random.Range(0.0f, 1.0f);
        }
    }

    private void CalculateAverage()
    {
        float sum = 0;
        foreach (float value in randomValues)
        {
            sum += value;
        }
        float average = sum / arraySize;
        Debug.Log("Average of random values: " + average);
    }

    private void PerformRandomActions()
    {
        for (int i = 0; i < arraySize; i++)
        {
            int randomIndex = Random.Range(0, arraySize);
            SwapValues(i, randomIndex);
        }
    }

    private void SwapValues(int index1, int index2)
    {
        if (index1 >= 0 && index1 < arraySize && index2 >= 0 && index2 < arraySize)
        {
            float temp = randomValues[index1];
            randomValues[index1] = randomValues[index2];
            randomValues[index2] = temp;
            Debug.Log("DSfsdfsdfsdfsfsfsdf: " + temp);
            Debug.Log("asdadasdasdasdadsa: " + index2);

        }
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.R))
        {
            int randomIndex = Random.Range(0, arraySize);
            Debug.Log("Random value at index " + randomIndex + ": " + randomValues[randomIndex]);
        }
    }

    private void OnDestroy()
    {
        Debug.LogWarning("AnotherRandomCode script destroyed!");
    }
}

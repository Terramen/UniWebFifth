using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KickLoad : MonoBehaviour
{
    public GameObject objectToSpawn;
    public Vector2 spawnAreaSize = new Vector2(5f, 5f);

    private void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            SpawnObject();
        }
    }

    private void SpawnObject()
    {
        Vector3 randomPosition = GetRandomSpawnPosition();
        Instantiate(objectToSpawn, randomPosition, Quaternion.identity);
    }

    private Vector3 GetRandomSpawnPosition()
    {
        float randomX = Random.Range(-spawnAreaSize.x / 2, spawnAreaSize.x / 2);
        float randomY = Random.Range(-spawnAreaSize.y / 2, spawnAreaSize.y / 2);
        return new Vector3(randomX, 0f, randomY);
    }
}

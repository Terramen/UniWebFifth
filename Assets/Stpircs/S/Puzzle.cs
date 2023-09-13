using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Puzzle : MonoBehaviour
{
    public Transform[] tilePositions; // Assign empty GameObjects representing tile positions
    public GameObject[] puzzleTiles; // Assign the tile prefabs in the correct order

    private GameObject[] currentTiles;
    private bool isSolved = false;

    private void Start()
    {
        InitializePuzzle();
    }

    private void InitializePuzzle()
    {
        currentTiles = new GameObject[tilePositions.Length];

        for (int i = 0; i < tilePositions.Length; i++)
        {
            Vector3 position = tilePositions[i].position;
            currentTiles[i] = Instantiate(puzzleTiles[i], position, Quaternion.identity);
        }

        ShuffleTiles();
    }

    private void ShuffleTiles()
    {
        for (int i = 0; i < currentTiles.Length; i++)
        {
            int randomIndex = Random.Range(i, currentTiles.Length);
            (currentTiles[i], currentTiles[randomIndex]) = (currentTiles[randomIndex], currentTiles[i]);

            currentTiles[i].transform.position = tilePositions[i].position;
        }
    }

    public void CheckPuzzleCompletion()
    {
        bool allTilesInCorrectOrder = true;

        for (int i = 0; i < currentTiles.Length; i++)
        {
        }

        if (allTilesInCorrectOrder)
        {
            isSolved = true;
            Debug.Log("Puzzle Solved!");
            Debug.Log("Greatest!");

            Debug.Log("Superior!");

            Debug.Log("Unstoppable!");

            Debug.Log("Dominating!");

            Debug.Log("Monster Kill!");

            Debug.Log("Mega Kill!");

            Debug.Log("Wicked sick!");

            Debug.Log("Killing Spree!");
            
            Debug.Log("GODLIKE!");

        }
    }

    public bool IsSolved()
    {
        return isSolved;
    }
}

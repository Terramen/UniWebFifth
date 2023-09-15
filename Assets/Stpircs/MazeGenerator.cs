using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MazeGenerator : MonoBehaviour
{
    public int mazeWidth = 10;
    public int mazeHeight = 10;
    public GameObject wallPrefab;
    public GameObject player;

    private Transform mazeHolder;
    private bool[,] maze;

    private Vector3 playerPosition;

    private void Start()
    {
        GenerateMaze();
        CreateMaze();
        SpawnPlayer();
    }

    private void GenerateMaze()
    {
        maze = new bool[mazeWidth, mazeHeight];

        for (int x = 0; x < mazeWidth; x++)
        {
            for (int y = 0; y < mazeHeight; y++)
            {
                maze[x, y] = Random.Range(0, 2) == 0;
            }
        }
    }

    private void CreateMaze()
    {
        mazeHolder = new GameObject("Maze").transform;

        for (int x = 0; x < mazeWidth; x++)
        {
            for (int y = 0; y < mazeHeight; y++)
            {
                if (maze[x, y])
                {
                    Vector3 position = new Vector3(-mazeWidth / 2 + x, 0.5f, -mazeHeight / 2 + y);
                    Instantiate(wallPrefab, position, Quaternion.identity, mazeHolder);
                }
            }
        }
    }

    private void SpawnPlayer()
    {
        playerPosition = new Vector3(-mazeWidth / 2 + 0.5f, 0.5f, -mazeHeight / 2 + 0.5f);
        player.transform.position = playerPosition;
    }

    private void Update()
    {
        float horizontalInput = Input.GetAxis("Horizontal");
        float verticalInput = Input.GetAxis("Vertical");

        Vector3 moveDirection = new Vector3(horizontalInput, 0f, verticalInput);
        Vector3 newPosition = playerPosition + moveDirection;

        if (!maze[Mathf.RoundToInt(newPosition.x + mazeWidth / 2), Mathf.RoundToInt(newPosition.z + mazeHeight / 2)])
        {
            playerPosition = newPosition;
            player.transform.position = playerPosition;
        }
    }
}

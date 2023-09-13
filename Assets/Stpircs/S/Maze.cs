using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Maze : MonoBehaviour
{
    public int mazeWidth = 10;
    public int mazeHeight = 10;
    public GameObject wallPrefab;
    public GameObject floorPrefab;

    private bool[,] visitedCells;
    private Stack<Vector2Int> cellStack;
    private GameObject mazeContainer;

    private void Start()
    {
        GenerateMaze();
    }

    void GenerateMaze()
    {
        visitedCells = new bool[mazeWidth, mazeHeight];
        cellStack = new Stack<Vector2Int>();
        mazeContainer = new GameObject("Maze");

        Vector2Int initialCell = new Vector2Int(0, 0);
        cellStack.Push(initialCell);

        while (cellStack.Count > 0)
        {
            Vector2Int currentCell = cellStack.Peek();
            visitedCells[currentCell.x, currentCell.y] = true;
            List<Vector2Int> unvisitedNeighbors = GetUnvisitedNeighbors(currentCell);

            if (unvisitedNeighbors.Count == 0)
            {
                cellStack.Pop();
            }
            else
            {
                Vector2Int nextCell = unvisitedNeighbors[Random.Range(0, unvisitedNeighbors.Count)];
                RemoveWall(currentCell, nextCell);
                cellStack.Push(nextCell);
            }
        }
    }

    List<Vector2Int> GetUnvisitedNeighbors(Vector2Int cell)
    {
        List<Vector2Int> neighbors = new List<Vector2Int>();

        Vector2Int[] directions = { Vector2Int.up, Vector2Int.right, Vector2Int.down, Vector2Int.left };

        foreach (Vector2Int direction in directions)
        {
            Vector2Int neighbor = cell + direction;
            if (IsInBounds(neighbor) && !visitedCells[neighbor.x, neighbor.y])
            {
                neighbors.Add(neighbor);
            }
        }

        return neighbors;
    }

    bool IsInBounds(Vector2Int cell)
    {
        return cell.x >= 0 && cell.x < mazeWidth && cell.y >= 0 && cell.y < mazeHeight;
    }

    void RemoveWall(Vector2Int currentCell, Vector2Int nextCell)
    {
        Vector3 wallPosition = new Vector3((currentCell.x + nextCell.x) * 0.5f, 0f, (currentCell.y + nextCell.y) * 0.5f);
        GameObject wall = Instantiate(floorPrefab, wallPosition, Quaternion.identity);
        wall.transform.parent = mazeContainer.transform;

        Vector3 wallScale = wall.transform.localScale;
        if (currentCell.x == nextCell.x)
        {
            wallScale.x *= 0.5f;
        }
        else
        {
            wallScale.z *= 0.5f;
        }
        wall.transform.localScale = wallScale;
    }
}

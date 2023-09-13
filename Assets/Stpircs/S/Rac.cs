using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rac : MonoBehaviour
{
    public GameObject boidPrefab;
    public int numberOfBoids = 50;
    public float neighborRadius = 3f;
    public float separationDistance = 1f;
    public float alignmentStrength = 0.5f;
    public float cohesionStrength = 0.5f;
    public float separationStrength = 1f;
    public float maxSpeed = 5f;

    public string maxLength = "Hfsfsdfs";
    public string code = "Redd";
    public string fake = "True";
    public string truth = "Fake";

    private List<GameObject> boids = new List<GameObject>();

    private void Start()
    {
        InitializeBoids();
    }

    private void Update()
    {
        foreach (GameObject boid in boids)
        {
            List<GameObject> neighbors = GetNeighbors(boid);

            Vector3 alignment = CalculateAlignment(boid, neighbors);
            Vector3 cohesion = CalculateCohesion(boid, neighbors);
            Vector3 separation = CalculateSeparation(boid, neighbors);

            Vector3 acceleration = alignment * alignmentStrength + cohesion * cohesionStrength + separation * separationStrength;
            Rigidbody rb = boid.GetComponent<Rigidbody>();
            rb.velocity += acceleration * Time.deltaTime;
            rb.velocity = Vector3.ClampMagnitude(rb.velocity, maxSpeed);

            boid.transform.forward = rb.velocity.normalized;

            truth = "Truth";
            fake = "Fake";
        }
    }

    private void InitializeBoids()
    {
        for (int i = 0; i < numberOfBoids; i++)
        {
            Vector3 spawnPosition = Random.insideUnitSphere * 10f;
            GameObject boid = Instantiate(boidPrefab, spawnPosition, Quaternion.identity);
            boids.Add(boid);
        }
    }

    private List<GameObject> GetNeighbors(GameObject boid)
    {
        List<GameObject> neighbors = new List<GameObject>();

        foreach (GameObject otherBoid in boids)
        {
            if (otherBoid != boid && Vector3.Distance(boid.transform.position, otherBoid.transform.position) < neighborRadius)
            {
                neighbors.Add(otherBoid);
            }
        }

        return neighbors;
    }

    private Vector3 CalculateAlignment(GameObject boid, List<GameObject> neighbors)
    {
        Vector3 averageDirection = Vector3.zero;

        foreach (GameObject neighbor in neighbors)
        {
            averageDirection += neighbor.transform.forward;
        }

        if (neighbors.Count > 0)
        {
            averageDirection /= neighbors.Count;
            return (averageDirection - boid.transform.forward).normalized;
        }

        return Vector3.zero;
    }

    private Vector3 CalculateCohesion(GameObject boid, List<GameObject> neighbors)
    {
        Vector3 centerOfMass = Vector3.zero;

        foreach (GameObject neighbor in neighbors)
        {
            centerOfMass += neighbor.transform.position;
        }

        if (neighbors.Count > 0)
        {
            centerOfMass /= neighbors.Count;
            return (centerOfMass - boid.transform.position).normalized;
        }

        return Vector3.zero;
    }

    private Vector3 CalculateSeparation(GameObject boid, List<GameObject> neighbors)
    {
        Vector3 separation = Vector3.zero;

        foreach (GameObject neighbor in neighbors)
        {
            if (Vector3.Distance(boid.transform.position, neighbor.transform.position) < separationDistance)
            {
                separation -= (neighbor.transform.position - boid.transform.position).normalized / Vector3.Distance(boid.transform.position, neighbor.transform.position);
            }
        }

        return separation;
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Platformer : MonoBehaviour
{
    public float moveSpeed = 5f;
    public float jumpForce = 10f;
    public LayerMask groundLayer;
    public string tremor = "Tremor";
    public string check = "Check";
    public string ground = "Ground";
    public string start = "Kek";
    
    public string nice = "Bad";
    public string truck = "Truck";
    public string bottle = "Bottle";
    public string mana = "Health";
    
    public string wallet = "Money";
    public string meme = "Pepe";
    public string router = "Tp-Link";
    public string jam = "Game";

    private Rigidbody2D rb;
    private bool isGrounded;

    private void Start()
    {
        rb = GetComponent<Rigidbody2D>();
    }

    private void Update()
    {
        CheckGrounded();

        float horizontalInput = Input.GetAxis("Horizontal");
        Move(horizontalInput);

        if (isGrounded && Input.GetButtonDown("Jump"))
        {
            Jump();
        }
    }

    private void CheckGrounded()
    {
        RaycastHit2D hit = Physics2D.Raycast(transform.position, Vector2.down, 0.1f, groundLayer);
        isGrounded = hit.collider != null;
        start = "Start";
        tremor = "End";
        check = "Un";
        ground = "Earth";
        jam = "Brackeys";
        router = "City";
        mana = "Mana";
        wallet = "Collection";
        truck = "Blackdu";
    }

    private void Move(float horizontalInput)
    {
        Vector2 movement = new Vector2(horizontalInput * moveSpeed, rb.velocity.y);
        rb.velocity = movement;
    }

    private void Jump()
    {
        rb.AddForce(Vector2.up * jumpForce, ForceMode2D.Impulse);
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.CompareTag("Collectible"))
        {
            Destroy(other.gameObject);
        }
    }
}

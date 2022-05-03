using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public float moveSpeed;
    public Rigidbody2D rb;
    public Animator animator;
    Vector2 movement;
    float moveX;
    float moveY;

    public DynamicJoystick dynamicJoystick;


    void Update()
    {
        //Input
        if(Input.GetAxisRaw("Horizontal") != 0f || Input.GetAxisRaw("Vertical") != 0f)
        {
            moveX = Input.GetAxisRaw("Horizontal"); //dynamicJoystick.Horizontal;
            moveY = Input.GetAxisRaw("Vertical"); //dynamicJoystick.Vertical;
        }
        else
        {
            moveX = dynamicJoystick.Horizontal;
            moveY = dynamicJoystick.Vertical;
        }
        
        movement = new Vector2(moveX, moveY).normalized;

        //Animation Movement
        animator.SetFloat("Horizontal", movement.x);        //Detecta que tanto se esta moviendo Horizontalmente
        animator.SetFloat("Vertical", movement.y);          //Detecta que tanto se esta moviendo Verticalmente
        animator.SetFloat("Speed", movement.sqrMagnitude);  //Detecta movimietno para hacer cambio de idle a movement

        //Animation Set Correct Idle Face
        if (moveX == 1 || moveX == -1 || moveY == 1 || moveY == -1)
        {
            animator.SetFloat("LastMoveX", moveX);
            animator.SetFloat("LastMoveY", moveY);
        }
    }

    private void FixedUpdate()
    {
        //Movement
        rb.MovePosition(rb.position + movement * moveSpeed * Time.fixedDeltaTime);
    }

    void Move_Keyboard()
    {
        //Input
        float moveX = Input.GetAxisRaw("Horizontal");
        float moveY = Input.GetAxisRaw("Vertical"); 
        movement = new Vector2(moveX, moveY).normalized;

        //Animation Movement
        animator.SetFloat("Horizontal", movement.x);        //Detecta que tanto se esta moviendo Horizontalmente
        animator.SetFloat("Vertical", movement.y);          //Detecta que tanto se esta moviendo Verticalmente
        animator.SetFloat("Speed", movement.sqrMagnitude);  //Detecta movimietno para hacer cambio de idle a movement

        //Animation Set Correct Idle Face
        if (moveX == 1 || moveX == -1 || moveY == 1 || moveY == -1)
        {
            animator.SetFloat("LastMoveX", moveX);
            animator.SetFloat("LastMoveY", moveY);
        }
    }

}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NPCController : MonoBehaviour
{
    public GameObject NPC_Canvas;


    virtual protected void OnTriggerEnter2D(Collider2D other)
    {
        if (other.tag == "Player")
        {
            NPC_Canvas.SetActive(true);
        }
    }

    virtual protected void OnTriggerExit2D(Collider2D other)
    {
        if (other.tag == "Player")
        {
            NPC_Canvas.SetActive(false);
        }
    }
}

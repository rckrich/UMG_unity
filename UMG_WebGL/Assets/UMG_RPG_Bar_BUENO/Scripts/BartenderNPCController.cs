using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BartenderNPCController : NPCController
{
    private bool hasPlayerTalkTo = false;
    public GameObject signalCanvasObject;

    public void SetHasPlayerTalkTo(bool _value) {
        hasPlayerTalkTo = _value;

        if (_value)
        {
            signalCanvasObject.SetActive(false);
        }
    }

    protected override void OnTriggerEnter2D(Collider2D other)
    {
        if (other.tag == "Player")
        {
            NPC_Canvas.SetActive(true);

            signalCanvasObject.SetActive(false);
        }
    }

    protected override void OnTriggerExit2D(Collider2D other)
    {
        if (other.tag == "Player")
        {
            NPC_Canvas.SetActive(false);

            if (hasPlayerTalkTo)
            {
                signalCanvasObject.SetActive(false);
            }
            else
            {
                signalCanvasObject.SetActive(true);
            }
        }
    }
}

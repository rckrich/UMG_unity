using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Dialogue_Trigger_Tiny : MonoBehaviour
{
    public Dialogue_Manager_Tiny dialogue_Manager_Tiny;
    public Dialogue dialogue;

    public void TriggerDialogue()
    {
        dialogue_Manager_Tiny.StartDialogue(dialogue);
    }
}

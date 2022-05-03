using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DialogueTrigger : MonoBehaviour
{
    public DialogueManager dialogue_Manager;
    public Dialogue dialogue;

    public void TriggerDialogue()
    {
        dialogue_Manager.StartDialogue(dialogue);
    }
}

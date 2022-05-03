using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Dialogue_Trigger : MonoBehaviour
{

    public Dialogue dialogue;

    public void TriggerDialogue()
    {
        Dialogue_Manager.Instance.StartDialogue(dialogue);
    }

}

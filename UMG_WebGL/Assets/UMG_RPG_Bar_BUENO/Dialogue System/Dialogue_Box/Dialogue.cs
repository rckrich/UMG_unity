using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class Dialogue
{
    public string name;

    [TextArea(3, 10)]
    public string[] sentences;

    [Header("** Si no se pone no pasa nada **")]
    public GameObject PanelToOpenAtEndOfTalking;
    public Sprite BigSpriteOfNPC;

}

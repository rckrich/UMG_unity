using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class ActionButton : MonoBehaviour
{
    public string key;
    public UnityEvent m_MyEvent;

    void OnEnable()
    {
        if (m_MyEvent == null)
        {
            m_MyEvent = new UnityEvent();
        }
    }

    void Update()
    {
        if (Input.GetKeyDown(key) && m_MyEvent != null)
        {
            m_MyEvent.Invoke();
            //Debug.Log("Ping");
        }   
    }
}

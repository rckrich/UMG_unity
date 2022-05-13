using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Web3Canvas : MonoBehaviour
{

    private void Awake()
    {
        WarningCanvasSetActive(false);
    }

    public void WarningCanvasSetActive(bool _value)
    {
        this.transform.GetChild(0).gameObject.SetActive(_value);
    }
}

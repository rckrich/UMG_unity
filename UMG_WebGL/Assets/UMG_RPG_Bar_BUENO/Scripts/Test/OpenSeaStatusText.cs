using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class OpenSeaStatusText : MonoBehaviour
{
    [Header("References")]
    public TextMeshProUGUI tmPro;

    [Header("Status TRUE")]
    public Color trueColor;
    public string trueText;

    [Header("Status FALSE")]
    public Color falseColor;
    public string falseText;

    public void StartTest()
    {
        TEST();
    }

    private void StatusTrue()
    {
        tmPro.color = trueColor;
        tmPro.text = trueText;
    }

    private void StatusFalse()
    {
        tmPro.color = falseColor;
        tmPro.text = falseText;
    }

    async private void TEST()
    {
        /* comentado porque daba errores
        bool result = await Web3Manager.instance.HasCollection();
        if (result)
        {
            StatusTrue();
        }
        else
        {
            StatusFalse();
        }
        */
    }
}

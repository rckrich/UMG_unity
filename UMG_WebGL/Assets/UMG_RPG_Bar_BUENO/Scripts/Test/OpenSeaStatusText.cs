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
        StartCoroutine(CR_TEST());
        //TEST();
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

    private void TEST()
    {
        bool result = Web3Manager.instance.HasUMGNFT();
        if (result)
        {
            StatusTrue();
        }
        else
        {
            StatusFalse();
        }
    }

    private IEnumerator CR_TEST()
    {
        bool result = Web3Manager.instance.HasUMGNFT();
        yield return null;
        if (result)
        {
            StatusTrue();
        }
        else
        {
            StatusFalse();
        }
        yield return null;
    }
}

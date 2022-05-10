using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
// use web3.jslib
using System.Runtime.InteropServices;

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
        //StartCoroutine(CR_TEST());
        TEST();
    }

    public void FetchTest()
    {
        MetaMaskManager.instance.FetchCollection();
    }

    private void StatusTrue() {
        tmPro.color = trueColor;
        tmPro.text = trueText;
    }

    private void StatusFalse() {
        tmPro.color = falseColor;
        tmPro.text = falseText;
    }

    private void TEST() {
        bool result = MetaMaskManager.instance.HasUMGNFT();
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
        bool result = MetaMaskManager.instance.HasUMGNFT();
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

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayPanel : MonoBehaviour
{
    public Animator animator;
    public GameObject barEntraceGO;

    public void OnSkipButtonClicked() {
        barEntraceGO.SetActive(true);
        animator.SetTrigger("Activate");
    }

    public void OnConnectButtonClicked() {
        Connect();
    }

    private async void Connect()
    {
        await Web3Manager.instance.OnLogin();
        barEntraceGO.SetActive(true);
        animator.SetTrigger("Activate");
    }
}

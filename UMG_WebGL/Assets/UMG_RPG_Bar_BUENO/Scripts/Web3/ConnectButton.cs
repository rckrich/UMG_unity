using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
// use web3.jslib
using System.Runtime.InteropServices;

public class ConnectButton : MonoBehaviour
{
    // text in the button
    public Text ButtonText;
    // use WalletAddress function from web3.jslib
    [DllImport("__Internal")] private static extern string WalletAddress();

    private void Start()
    {
        ButtonText.text = "Connect Wallet";
    }

    public void OnClick()
    {
        // get wallet address and display it on the button
        string walletAddres = WalletAddress();
        FindObjectOfType<MetaMaskManager>().SetWalletAddress(walletAddres);
        ButtonText.text = walletAddres;
    }
}

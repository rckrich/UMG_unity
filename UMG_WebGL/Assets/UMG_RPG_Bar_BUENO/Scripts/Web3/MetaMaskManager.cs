using System.Collections;
using System.Collections.Generic;
using UnityEngine;
// use web3.jslib
using System.Runtime.InteropServices;

public class MetaMaskManager : MonoBehaviour
{
    private static MetaMaskManager self;

    public static MetaMaskManager instance
    {
        get
        {
            if (self == null)
            {
                self = (MetaMaskManager)GameObject.FindObjectOfType(typeof(MetaMaskManager));
            }
            return self;
        }
    }

    public static MetaMaskManager dontDestroyMetaMaskM;
    [DllImport("__Internal")] private static extern string ConnectToMetamask();
    [DllImport("__Internal")] private static extern string Test();

    void Awake()
    {
        if (dontDestroyMetaMaskM == null)
        {
            DontDestroyOnLoad(gameObject);
            dontDestroyMetaMaskM = this;
        }
        else if (dontDestroyMetaMaskM != this)
        {
            Destroy(gameObject);
        }
        initApp();
    }

    private string walletAddress;
    private OpenSea os;

    private void initApp() {
        walletAddress = "";
        os = this.gameObject.AddComponent(typeof(OpenSea)) as OpenSea;
    }

    public string GetWalletAddres()
    {
        return walletAddress;   
    }

    public void SetWalletAddress(string _walletAddres)
    {
        walletAddress = _walletAddres;
    }

    public void ConnectMetamaskjscript() {
        ConnectToMetamask();
    }

    public void FetchCollection() {
        os.RunFetchjscript();
    }

    public void ButtonTest() {
        Test();
    }


    public bool HasUMGNFT() {
        if (walletAddress.Equals("")){
            return false;
        }
        else {
            return os.HasUMGCollectionjscript();
        }
    }
}

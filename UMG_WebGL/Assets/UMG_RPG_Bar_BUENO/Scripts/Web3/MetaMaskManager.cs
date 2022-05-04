using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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

    public bool HasUMGNFT() {
        //TODO: TEST TO DELETE
        walletAddress = "0x0507F65Eb0aCC4d4994D09FD143C0138971Dae0b";
        //TODO: END TEST
        if (walletAddress.Equals("")){
            return false;
        }
        else {
            return os.HasUMGCollection(walletAddress);
        }
    }
}

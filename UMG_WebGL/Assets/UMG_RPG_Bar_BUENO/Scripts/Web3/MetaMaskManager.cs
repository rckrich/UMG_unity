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
    [DllImport("__Internal")]
    private static extern void Web3Connect();

    [DllImport("__Internal")]
    private static extern string ConnectAccount();

    [DllImport("__Internal")]
    private static extern void SetConnectAccount(string value);

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
    private int expirationTime;
    private string account;
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

    public void FetchCollection() {
        os.RunFetchjscript();
    }

    public bool HasUMGNFT() {
        if (walletAddress.Equals("")){
            return false;
        }
        else {
            return os.HasUMGCollection(walletAddress);
        }
    }

    public void OnLogin()
    {
        Web3Connect();
        OnConnected();
    }

    async private void OnConnected()
    {
        account = ConnectAccount();
        while (account == "")
        {
            await new WaitForSeconds(1f);
            account = ConnectAccount();
        };
        // save account for next scene
        PlayerPrefs.SetString("Account", account);
        // set account in manager
        SetWalletAddress(account);
        // reset login message
        SetConnectAccount("");
    }

    public void OnSkip()
    {
        // burner account for skipped sign in screen
        PlayerPrefs.SetString("Account", "");
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;

public class Web3Manager : MonoBehaviour
{
    private static Web3Manager self;

    public static Web3Manager instance
    {
        get
        {
            if (self == null)
            {
                self = (Web3Manager)GameObject.FindObjectOfType(typeof(Web3Manager));
            }
            return self;
        }
    }

    public static Web3Manager dontDestroyWeb3M;
    [DllImport("__Internal")]
    private static extern void Web3Connect();

    [DllImport("__Internal")]
    private static extern string ConnectAccount();

    [DllImport("__Internal")]
    private static extern void SetConnectAccount(string value);

    void Awake()
    {
        if (dontDestroyWeb3M == null)
        {
            DontDestroyOnLoad(gameObject);
            dontDestroyWeb3M = this;
        }
        else if (dontDestroyWeb3M != this)
        {
            Destroy(gameObject);
        }
        initApp();
    }

    private string walletAddress;
    private int expirationTime;
    private string account;
    private OpenSeaManager openSeaM;

    private void initApp()
    {
        walletAddress = "";
        openSeaM = this.gameObject.AddComponent(typeof(OpenSeaManager)) as OpenSeaManager;
    }

    public string GetWalletAddres()
    {
        return walletAddress;
    }

    public void SetWalletAddress(string _walletAddres)
    {
        walletAddress = _walletAddres;
    }

    public bool HasUMGNFT()
    {
        if (walletAddress.Equals(""))
        {
            return false;
        }
        else
        {
            return openSeaM.HasUMGCollection(walletAddress);
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

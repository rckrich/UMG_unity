using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using UnityEngine;

#if UNITY_WEBGL
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

    private void initApp()
    {
        walletAddress = "";
    }

    public string GetWalletAddres()
    {
        return walletAddress;
    }

    public void SetWalletAddress(string _walletAddres)
    {
        walletAddress = _walletAddres;
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

    async public Task<bool> HasCollection()
    {
        try
        {
            string response = await Web3GL.FetchCollection();
            Debug.Log(response);
            switch (response)
            {
                case "":
                    return false;
                case "false":
                    return false;
                case "true":
                    return true;
            }
        }
        catch (Exception e)
        {
            Debug.LogException(e, this);
        }

        return false;
    }

}
#endif

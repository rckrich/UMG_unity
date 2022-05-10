using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RestSharp;
using System;
// use web3.jslib
using System.Runtime.InteropServices;


public class OpenSea : MonoBehaviour
{
    // use WalletAddress function from web3.jslib
    [DllImport("__Internal")] private static extern string FetchCollection();
    [DllImport("__Internal")] private static extern string RunFetch();

    public bool HasUMGCollection(string _walletAddress)
    {
        try
        {
            var client = new RestClient("https://testnets-api.opensea.io/api/v1/collections?asset_owner=" + _walletAddress + "&offset=0&limit=300");
            var request = new RestRequest(Method.GET);
            request.AddHeader("Accept", "application/json");
            IRestResponse response = client.Execute(request);
            Debug.Log(response.Content);
            return SearchCollection(JsonListDeserialize.Deserialize<Root>(response.Content));
        }
        catch (Exception e)
        {
            Debug.LogWarning("Error: " + e.ToString());
        }

        return false;
    }

    private bool SearchCollection(List<Root> root) {
        foreach(Root value in root)
        {
            Debug.Log(value.name);
            if (value.name == "TEST Unicorn Motorcycle Gang V2")
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        return false;
    }

    public void RunFetchjscript() {
        RunFetch();
    }

    public bool HasUMGCollectionjscript() {
        string result = FetchCollection();
        if (result.Equals("false")){
            return false;
        }
        else {
            return true;
        }
    }
}

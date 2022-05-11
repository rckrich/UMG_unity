using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RestSharp;
using System;

public class OpenSeaManager : MonoBehaviour
{
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

    private bool SearchCollection(List<Root> root)
    {
        foreach (Root value in root)
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

}

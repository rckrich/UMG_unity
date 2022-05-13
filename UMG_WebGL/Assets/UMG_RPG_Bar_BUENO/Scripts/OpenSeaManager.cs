using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Threading.Tasks;

#if UNITY_WEBGL
public class OpenSeaManager : MonoBehaviour
{
    async public Task<bool> HasUMGCollection()
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
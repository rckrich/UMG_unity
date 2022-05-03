using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OpenURL : MonoBehaviour
{
    private string UMG_Discord_URL;

    private void Start()
    {
        UMG_Discord_URL = "https://discord.gg/xpkERmUtQh";
    }

    public void Btn_OpenUrl(int value)
    {
        switch(value)
        {
            case 1:
                Application.OpenURL(UMG_Discord_URL);
            break;
         }
    }
}

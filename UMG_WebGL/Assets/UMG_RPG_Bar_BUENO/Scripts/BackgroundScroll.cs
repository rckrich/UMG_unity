using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackgroundScroll : MonoBehaviour
{
    Vector2 offset;
    public Material material;
    public int xVelocity, yVelocity;


    void Start()
    {
        offset = new Vector2(xVelocity, yVelocity);
    }


    void Update()
    {
        material.mainTextureOffset += offset * Time.deltaTime;
    }
}

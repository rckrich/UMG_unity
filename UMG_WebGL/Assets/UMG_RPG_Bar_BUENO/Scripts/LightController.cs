using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Experimental.Rendering.Universal;

public class LightController : MonoBehaviour
{
    [Header("Light Refernce")]
    public Light2D pointLight2D;

    [Header("On/Off Switch")]
    public bool onOffSwitch = true;

    [Header("Light Change Configuration")]
    public float timeInBetween = 2f;
    public Color colorA;
    public Color colorB;
    [Space]
    [Header("Light Intermittent Configuration")]
    [Range(0.10f,10f)]
    public float intensitySpeed = 1.0f;
    [Range(0.0f, 10f)]
    public float intensityCap = 1.0f;


    private WaitForSeconds ws;
    private float intensity = 1.5f;

    // Start is called before the first frame update
    void Start()
    {
        intensity = pointLight2D.intensity;
        ws = new WaitForSeconds(timeInBetween);

        StartCoroutine(switchLights_CR());
        StartCoroutine(switchLightsIntensity_CR()); ;
    }

    private IEnumerator switchLights_CR() {

        bool colorSwitch = true;

        while (onOffSwitch) {
            yield return ws;

            if (colorSwitch)
            {
                pointLight2D.color = colorA;
                colorSwitch = false;
            }
            else {
                pointLight2D.color = colorB;
                colorSwitch = true;
            }
            
            yield return null;
        }
    }

    private IEnumerator switchLightsIntensity_CR()
    {
        bool maxMin = true;

        while (onOffSwitch)
        {

            if (maxMin)
            {
                pointLight2D.intensity += Time.deltaTime * intensitySpeed;
                maxMin = pointLight2D.intensity >= (intensity + intensityCap) ? false : true;
            }
            else {
                pointLight2D.intensity -= Time.deltaTime * intensitySpeed;
                maxMin = pointLight2D.intensity <= (intensity - intensityCap) ? true : false;
            }


            yield return null;
        }
    }

    private void OnDisable()
    {
        StopAllCoroutines();
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour
{
    //Movement
    public Transform target;
    public float smoothing;

    //Movement Clamp Boundaries
    public Vector2 minPosition;
    public Vector2 maxPosition;


    void LateUpdate()
    {
        //transform.position = new Vector3(target.transform.position.x, target.transform.position.y, transform.position.z);

        if(transform.position != target.position)
        {
            Vector3 targetPosition = new Vector3(target.position.x, target.position.y, transform.position.z);   // Creamos esta variable para que z no se mueva

            //Movement Clamp Boundaries
            targetPosition.x = Mathf.Clamp(targetPosition.x, minPosition.x, maxPosition.x);
            targetPosition.y = Mathf.Clamp(targetPosition.y, minPosition.y, maxPosition.y);

            //Movement
            transform.position = Vector3.Lerp(transform.position, targetPosition, smoothing);
        }
    }
}

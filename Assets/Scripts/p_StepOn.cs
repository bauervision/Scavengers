using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class p_StepOn : MonoBehaviour
{
    public float movementSpeed = 1.0f;
    public float downPosition;

    public GameObject affectedObject;

    private bool isOn = false;
    void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            isOn = true;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        isOn = false;
    }



    void Update()
    {
        if (isOn)
        {
            if (transform.localPosition.y > downPosition)
            {
                // Move the object upward in world space 1 unit/second.
                transform.Translate(Vector3.down * (Time.deltaTime * movementSpeed), Space.World);
            }
            else
            {
                affectedObject.GetComponent<AnimatedObject>().isAnimating = true;

            }
        }
    }
}

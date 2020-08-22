using UnityEngine;
using System.Collections;

public class Seed : MonoBehaviour
{
    public GameObject plant;
    private void OnCollisionEnter(Collision other)
    {


        if (other.gameObject.tag == "PW - Nature")
        {
            Instantiate(plant, other.transform.position, other.transform.rotation);
            //  Destroy(other.gameObject);
            print("Collision with ground Detected");
            Destroy(gameObject);
        }
        else
        {
            print("Collision with Other Detected");
        }
    }
}
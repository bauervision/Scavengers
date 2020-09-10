using UnityEngine;
using System.Collections;

public class Plant : MonoBehaviour
{
    public float initialSize;
    public float maxSize;
    public float initialBloomSize;
    public float maxBloomSize;
    public float growFactor;


    void Start()
    {
        StartCoroutine(ScaleMain());
    }

    IEnumerator ScaleMain()
    {
        // we scale all axis, so they will have the same value, 
        // so we can work with a float instead of comparing vectors
        while (maxSize > transform.localScale.x)
        {
            transform.localScale += new Vector3(initialSize, initialSize, initialSize) * Time.deltaTime * growFactor;
            yield return null;
        }

        // at this point, the main flower has grown, trigger the bloom
        StartCoroutine(ScaleBloom());
    }

    IEnumerator ScaleBloom()
    {
        // we scale all axis, so they will have the same value, 
        // so we can work with a float instead of comparing vectors
        while (maxBloomSize > transform.GetChild(0).localScale.x)
        {
            transform.GetChild(0).localScale += new Vector3(initialBloomSize, initialBloomSize, initialBloomSize) * Time.deltaTime * growFactor;
            yield return null;
        }

        // trigger whatever happens after it blooms
    }

}
using UnityEngine;
using System.Collections;

public class Seed : MonoBehaviour
{
    public GameObject plant;

    public Transform seedTransform;
    public Terrain t;

    public int posX;
    public int posZ;
    public float[] textureValues;

    void Start()
    {
        t = Terrain.activeTerrain;
        seedTransform = gameObject.transform;
    }


    private void OnCollisionEnter(Collision other)
    {
        if (other.gameObject.tag == "PW - Nature")
            GetTerrainTexture();
    }


    public void GetTerrainTexture()
    {
        ConvertPosition(seedTransform.position);
        CheckTexture();

        // if (textureValues[0] > 0)
        // {
        //     print("Hit Mountain Rock!");
        // }
        // hit soil texture
        if (textureValues[1] > 0)
        {
            // plant the flower that will bloom
            Instantiate(plant, transform.position, Quaternion.identity);
            // destroy the seed
            Destroy(gameObject);
        }
        else
        {
            StartCoroutine(WaitToDestroy());
        }
        // if (textureValues[2] > 0)
        // {
        //     print("Hit Sandy Rock!");
        // }
        // if (textureValues[3] > 0)
        // {
        //     print("Hit Gravel Path!");
        // }
    }

    void ConvertPosition(Vector3 seedPosition)
    {
        Vector3 terrainPosition = seedPosition - t.transform.position;

        Vector3 mapPosition = new Vector3
        (terrainPosition.x / t.terrainData.size.x, 0,
        terrainPosition.z / t.terrainData.size.z);

        float xCoord = mapPosition.x * t.terrainData.alphamapWidth;
        float zCoord = mapPosition.z * t.terrainData.alphamapHeight;

        posX = (int)xCoord;
        posZ = (int)zCoord;
    }

    void CheckTexture()
    {
        float[,,] aMap = t.terrainData.GetAlphamaps(posX, posZ, 1, 1);
        textureValues[0] = aMap[0, 0, 0];
        textureValues[1] = aMap[0, 0, 1];
        textureValues[2] = aMap[0, 0, 2];
        textureValues[3] = aMap[0, 0, 3];



    }




    IEnumerator WaitToDestroy()
    {
        yield return new WaitForSeconds(4f);
        Destroy(gameObject);
    }
}
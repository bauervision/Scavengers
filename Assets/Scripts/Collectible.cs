using UnityEngine;
using System.Collections;
using System.Collections.Generic;

[System.Serializable]
public class Collectible
{
    public bool acquired;
    public string name;
    public int points;

    // probably a link to the mesh
    public Collectible(string newCollectibleName, int newPoints)
    {
        this.acquired = false;
        this.name = newCollectibleName;
        this.points = newPoints;
    }

}
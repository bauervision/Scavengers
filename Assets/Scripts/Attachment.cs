using UnityEngine;
using System.Collections;
using System.Collections.Generic;

[System.Serializable]
public class Attachment
{
    public bool isAttached;
    public string name;
    public int points;

    // probably a link to the mesh

    public Attachment(string newAttachmentName, int newPoints)
    {
        this.isAttached = false;
        this.name = newAttachmentName;
        this.points = newPoints;
    }

}
using UnityEngine;
using System.Collections;
using System.Collections.Generic;

[System.Serializable]
public class PlayerData
{
    public string name;
    public string email;
    public string rank;
    public double XP;
    public Collectibles collection;
    public Attachments attachments;

    //public UnlockedLevels availableLevels;

    // now save less exciting data
    public string dateJoined;



    public PlayerData()
    {
        this.name = "unknown name";
        this.email = "unknown email";
        this.rank = "Noob";
        this.XP = 0;
        this.collection = new Collectibles();
        this.attachments = new Attachments();
        this.dateJoined = "today";
        //this.availableLevels = new UnlockedLevels();
    }


}
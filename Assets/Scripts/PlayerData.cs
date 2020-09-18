using UnityEngine;
using System.Collections;
using System.Collections.Generic;

[System.Serializable]
public class PlayerData
{
    public string userId;
    public string name;
    public string email;
    public int rank;//save as int to convert to Ranking later
    public string rankString;
    public double XP;
    public Collectibles collection;
    public Attachments attachments;
    public string greatestItem;

    //public UnlockedLevels availableLevels;

    // now save less exciting data
    public ulong dateJoined;



    public PlayerData()
    {
        this.userId = "unknown";
        this.name = "unknown name";
        this.email = "unknown email";
        this.rank = 0;
        this.rankString = "Noob";
        this.XP = 0;
        this.collection = new Collectibles();
        this.attachments = new Attachments();
        this.greatestItem = "nothing yet";
        this.dateJoined = 0;
        //this.availableLevels = new UnlockedLevels();
    }


}
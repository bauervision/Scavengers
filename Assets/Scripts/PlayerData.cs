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
    public string greatestItem;
    public ulong dateJoined;
    public List<Collectible> collection;
    public List<Attachment> attachments;

    public List<Level> availableLevels;



    public PlayerData(string email, string userId, string name, ulong date)
    {
        this.userId = userId;
        this.name = name;
        this.email = email;
        this.rank = 0;
        this.rankString = "Noob";
        this.XP = 0;
        this.greatestItem = "Nothing yet";
        this.dateJoined = 0;

        // handle all lists
        this.collection = new List<Collectible>();
        Collectible defaultCollectible = new Collectible("Scavenger Spirit!", 0);// keep collection from being empty
        this.collection.Add(defaultCollectible);

        this.attachments = new List<Attachment>();
        Attachment starterGear = new Attachment("Starter Gear");
        this.attachments.Add(starterGear);

        // create and add all 10 levels
        this.availableLevels = new List<Level>();
        for (int i = 0; i < 10; i++)
        {
            Level newLevel;
            if (i == 0)
                newLevel = new Level("Isle of Noob");
            else
                newLevel = new Level("Unknown");

            this.availableLevels.Add(newLevel);
        }

    }


}
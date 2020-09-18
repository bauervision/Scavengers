using UnityEngine;
using UnityEngine.Events;
using System.Collections;
using System.Collections.Generic;
using Firebase;
using Firebase.Auth;
using Firebase.Database;
using Firebase.Extensions;
using System.Threading.Tasks;
public class ManagePlayerData : MonoBehaviour
{

    public static ManagePlayerData instance;
    public static PlayerData thisPlayer;

    private FirebaseDatabase firebaseDB;

    // Start is called before the first frame update
    void Start()
    {
        instance = this;
        DontDestroyOnLoad(this);
        firebaseDB = FirebaseDatabase.DefaultInstance;
    }

    public static void InitializeNewPlayer(string userId, string email, string name, ulong joinedOn)
    {
        thisPlayer = new PlayerData();
        thisPlayer.userId = userId;
        thisPlayer.email = email;
        thisPlayer.name = name;
        thisPlayer.dateJoined = joinedOn;

        // save the data
        instance.SavePlayerData();
        // test print the new player data
        // print("New Player Data");
        // print("Name: " + player.name);
        // print("Email: " + player.email);
        // print("UserId: " + player.userId);
        // print("Rank: " + player.rank);
        // print("XP: " + player.XP.ToString());
        // print("Joined: " + player.dateJoined.ToString());
    }


    public void SavePlayerData()
    {
        firebaseDB.GetReference($"users/{thisPlayer.userId}").SetRawJsonValueAsync(JsonUtility.ToJson(thisPlayer));

    }

    public static async Task<PlayerData> LoadPlayer(string userId)
    {
        var dbSnapshot = await instance.firebaseDB.GetReference($"users/{userId}").GetValueAsync();
        if (!dbSnapshot.Exists)
        {
            return null;
        }
        // save the loaded data right away into thisPlayer
        thisPlayer = JsonUtility.FromJson<PlayerData>(dbSnapshot.GetRawJsonValue());
        // return the resulting data
        return thisPlayer;
    }


}

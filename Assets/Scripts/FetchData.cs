using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine.Networking;
using System.Text;

public class FetchData : MonoBehaviour
{
    PlayerData myData;
    #region IEnumerators

    // PostSavedData is used to both create new players and will also update them
    IEnumerator PostSavedData()
    {
        // now convert the data
        string data = JsonUtility.ToJson(myData);

        print(data);
        string url = $"https://us-central1-octo-ar-demo.cloudfunctions.net/addSavedMission";
        var request = new UnityWebRequest(url, "POST");
        byte[] bodyRaw = Encoding.UTF8.GetBytes(data);
        request.uploadHandler = new UploadHandlerRaw(bodyRaw);
        request.downloadHandler = new DownloadHandlerBuffer();
        request.SetRequestHeader("Access-Control-Allow-Methods", "POST");
        request.SetRequestHeader("Content-Type", "application/json");
        request.SetRequestHeader("Access-Control-Allow-Headers", "*");
        request.SetRequestHeader("Access-Control-Allow-Origin", "https://cx-edge-terrain.web.app");

        yield return request.SendWebRequest();
        if (request.isNetworkError)
        {
            Debug.Log("Error: " + request.error);
        }
        else
        {
            Debug.Log("Status Code: " + request.responseCode);
            if (request.responseCode == 200)
                print("Successful save!");
            else
                print("There was an error saving the mission");
        }
    }

    IEnumerator LoadPlayerData(string url)
    {
        using (UnityWebRequest webRequest = UnityWebRequest.Get(url))
        {
            // Request and wait for the desired page.
            yield return webRequest.SendWebRequest();

            if (webRequest.isNetworkError)
            {
                Debug.Log("Error: " + webRequest.error);
            }
            else
            {
                var data = webRequest.downloadHandler.text;

                myData = JsonUtility.FromJson<PlayerData>(data);

                print("Loaded! " + myData);

            }
        }
    }
    #endregion




    private void Start()
    {
        // fetch the data
        StartCoroutine(LoadPlayerData("https://us-central1-octo-ar-demo.cloudfunctions.net/getAllMissions"));
    }

}
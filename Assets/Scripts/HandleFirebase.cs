using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Firebase;
using Firebase.Auth;

public class HandleFirebase : MonoBehaviour
{

    public static HandleFirebase instance;
    private void Start()
    {
        instance = this;
    }
    public static void SendNewRegistration(string name, string email, string password)
    {
        instance.StartCoroutine(instance.RegisterUser(name, email, password));
    }


    private IEnumerator RegisterUser(string name, string email, string password)
    {
        var auth = FirebaseAuth.DefaultInstance;
        var registerTask = auth.CreateUserWithEmailAndPasswordAsync(email, password);

        yield return new WaitUntil(() => registerTask.IsCompleted);

        // at this point, we either have a successful reg or an issue, so lets handle both cases
        if (registerTask.Exception != null)
        {
            print($"Failed to register user: {registerTask.Exception}");
            // do something to the UI with the failure
            RegistrationFlow.FailedRegistration(name);

        }
        else
        {
            print($"Successfully registered user: {registerTask.Result.Email}");
            // do something to the UI for the success
            RegistrationFlow.SuccessfulRegistration(name);
        }
    }

}
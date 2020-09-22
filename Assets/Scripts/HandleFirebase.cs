using UnityEngine;
using UnityEngine.Events;
using System.Collections;
using System.Collections.Generic;
using Firebase;
using Firebase.Auth;
using Firebase.Database;
using Firebase.Extensions;
using System.Threading.Tasks;

public class HandleFirebase : MonoBehaviour
{

    public UnityEvent OnFirebaseInitialized = new UnityEvent();
    public static HandleFirebase instance;
    private void Start()
    {
        instance = this;
        FirebaseApp.CheckAndFixDependenciesAsync().ContinueWithOnMainThread(task =>
        {
            if (task.Exception != null)
            {
                print("Failed to initialize Firebase" + task.Exception);
                return;
            }

            OnFirebaseInitialized.Invoke();
        });

    }
    public static void SendNewRegistration(string name, string email, string password)
    {
        instance.StartCoroutine(instance.RegisterUser(name, email, password));
    }

    public static void LoginReturningUser(string email, string password)
    {
        instance.StartCoroutine(instance.LoginUser(email, password));
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
            RegistrationFlow.FailedRegistration(email);

        }
        else
        {
            print($"Successfully registered user: {registerTask.Result.Email}");
            // and now set up the initial playerdata
            string newID = registerTask.Result.UserId;
            string newEmail = registerTask.Result.Email;
            ulong joinedOn = registerTask.Result.Metadata.CreationTimestamp;
            ManagePlayerData.InitializeNewPlayer(newID, newEmail, name, joinedOn);

            // write the new data

            // do something to the UI for the success
            RegistrationFlow.SuccessfulRegistration(name);
        }
    }

    private IEnumerator LoginUser(string email, string password)
    {
        var auth = FirebaseAuth.DefaultInstance;
        var loginTask = auth.SignInWithEmailAndPasswordAsync(email, password);

        yield return new WaitUntil(() => loginTask.IsCompleted);

        // at this point, we either have a successful login or an issue, so lets handle both cases
        if (loginTask.Exception != null)
        {
            print($"Failed to login user: {loginTask.Exception.Message}");
            // do something to the UI with the failure.
            RegistrationFlow.FailedLogin(loginTask.Exception.Message);

        }
        else
        {
            var loadPlayerDataTask = ManagePlayerData.LoadPlayer(loginTask.Result.UserId);
            yield return new WaitUntil(() => loadPlayerDataTask.IsCompleted);

            LoginManager.instance.ShowCharacterScreen();
        }
    }

}
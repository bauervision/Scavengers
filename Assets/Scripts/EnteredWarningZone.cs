using UnityEngine;
using UnityEngine.UI;

public class EnteredWarningZone : MonoBehaviour
{

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            // trigger item warning
            //show the panel
            InteractionManager.TriggerWarning();


        }
    }
    private void OnTriggerExit(Collider other)
    {

        InteractionManager.HideWarning();
    }

}

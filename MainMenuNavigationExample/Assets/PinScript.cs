using HoloToolkit.Unity;
using HoloToolkit.Unity.InputModule;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PinScript : MonoBehaviour, IInputClickHandler {

    public GameObject pinButton;
    public GameObject unpinButton;

    public void OnInputClicked(InputClickedEventData eventData)
    {
        Debug.Log("Tap Recognised");
        if (gameObject.name == "PinButton")
            PinThisLogic(false, false, true);
        else if (gameObject.name == "UnpinButton")
            PinThisLogic(true, true, false);

    }
    void PinThisLogic(bool value, bool pin, bool unpin)
    {
        Debug.Log("Pinning");
        GetComponentInParent<SimpleTagalong>().enabled = value;
        GetComponentInParent<Billboard>().enabled = value;
        pinButton.SetActive(pin);
        unpinButton.SetActive(unpin);
    }

}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MixedRealityToolkit.InputModule.EventData;
using MixedRealityToolkit.InputModule.InputHandlers;
using UnityEngine.SceneManagement;

public class TaptoChangeScene : MonoBehaviour, IInputClickHandler
{

    public void OnInputClicked(InputClickedEventData eventData)
    {
       
        switch (this.gameObject.name)
        {
            case ("ButtonScene2"):
                SceneManager.LoadSceneAsync("Scenes/Scene 2", LoadSceneMode.Single);
                break;

            case ("ButtonScene3"):
                SceneManager.LoadSceneAsync("Scenes/Scene 3", LoadSceneMode.Single);
                break;

            case ("ButtonScene1"):
                SceneManager.LoadSceneAsync("Scenes/Scene 1", LoadSceneMode.Single);
                break;

        }
    }
}

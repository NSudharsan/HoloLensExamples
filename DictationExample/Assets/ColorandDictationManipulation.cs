using System.Collections;
using System.Collections.Generic;
using HoloToolkit.Unity.InputModule;
using UnityEngine;

public class ColorandDictationManipulation : MonoBehaviour, IDictationHandler
{
    //initialization variables
    public TextMesh dictationOutputText;
    private new Renderer renderer;
    public GameObject objectToBeManipulated;
    private bool isRecording;
    private void Awake()
    {
        renderer = GetComponent<Renderer>();
    }

    //function which is called on Speech Input
    public void OnVoiceCommand()
    {
        //assign the cube object'S renderer component to the renderer variable in the script
        renderer = objectToBeManipulated.GetComponent<Renderer>();
        //change the cube and text color to red
        renderer.material.color = Color.red;
        dictationOutputText.color = Color.red;
        //call ToggleRecording()
        ToggleRecording();
    }
    public void OnDictationHypothesis(DictationEventData eventData)
    {
        dictationOutputText.text = eventData.DictationResult;
    }
    public void OnDictationResult(DictationEventData eventData)
    {
        dictationOutputText.text = eventData.DictationResult;
    }
    public void OnDictationComplete(DictationEventData eventData)
    {
        //assign dictation result to the text object
        dictationOutputText.text = eventData.DictationResult;
        //change cube color to green
        renderer.material.color = Color.green;
        //change text color to green
        dictationOutputText.color = Color.green;
    }
    public void OnDictationError(DictationEventData eventData)
    {
        //set the flag to false since recording did not take place
        isRecording = false;
        //ensure that text and cube colors is still white
        dictationOutputText.color = Color.white;
        renderer.material.color = Color.white;
        //call StopRecording function since there was an error in dictation
        StartCoroutine(DictationInputManager.StopRecording());
    }
    private void ToggleRecording()
    {
        if (isRecording)
        {
            isRecording = false;
            StartCoroutine(DictationInputManager.StopRecording());
            dictationOutputText.color = Color.red;
        }
        else
        {
            isRecording = true;
            StartCoroutine(DictationInputManager.StartRecording(5f, 20f, 10));
            dictationOutputText.color = Color.red;
            renderer.material.color = Color.red;

        }
    }
}

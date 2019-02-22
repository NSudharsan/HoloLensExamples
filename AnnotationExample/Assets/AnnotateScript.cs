using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HoloToolkit.Unity.InputModule;

public class AnnotateScript : MonoBehaviour, IDictationHandler, IInputClickHandler
{

    //Initialization variables
    private GameObject objectToBeInstantiated;
    public GameObject prefabObject;
    public GameObject cursor;
    public TextMesh speechToTextOutput;
    private AudioSource audioSource;
    private AudioClip dictationAudioClip;
    private bool isRecording;
    private bool audioState;

    private void Awake()
    {
        dictationAudioClip = GetComponent<AudioClip>();
        audioSource = GetComponent<AudioSource>();
        isRecording = false;
        audioState = false;
    }
    public void Update()
    {
        if (audioSource != null && !audioSource.isPlaying && audioState)
        {
            audioSource.Stop();
            audioState = false;
            return;
        }
    }
    public void AnnotateOnSpeech()
    {
        //Instantiation code
        objectToBeInstantiated = Instantiate(prefabObject, cursor.transform.position, Camera.main.transform.rotation);
        objectToBeInstantiated.transform.position = cursor.transform.position; // Instantiate object at cursor position
        audioSource = objectToBeInstantiated.GetComponent<AudioSource>();

    }

    //Methods that need to be implemented fór the IDictationHandler
    public void OnDictationComplete(DictationEventData eventData)
    {
        speechToTextOutput.text = eventData.DictationResult;
        speechToTextOutput.color = Color.green;
        dictationAudioClip = eventData.DictationAudioClip;
        audioSource.clip = dictationAudioClip;

    }
    public void OnDictationError(DictationEventData eventData)
    {
        speechToTextOutput.text = eventData.DictationResult;
        speechToTextOutput.color = Color.white;
        isRecording = false;
        StartCoroutine(DictationInputManager.StopRecording());

    }
    public void OnDictationHypothesis(DictationEventData eventData)
    {
        speechToTextOutput.text = eventData.DictationResult;

    }
    public void OnDictationResult(DictationEventData eventData)
    {
        speechToTextOutput.text = eventData.DictationResult;

    }
    public void OnInputClicked(InputClickedEventData eventData)
    {
        //check if tapped object's child's Textmesh is not null
        if (eventData.selectedObject.GetComponentInChildren<TextMesh>() == null) { Debug.Log("Text mesh is null"); }
        
        if (eventData.selectedObject.GetComponentInChildren<TextMesh>().color == Color.green)
        {
            audioSource.Stop();
            audioState = false;
            PlayAudio();
        }
        else
        { 
            Recording();
        }
    }
    public void PlayAudio()
    {

        if (audioSource == null || audioSource.isPlaying)
        {
            Debug.Log("Audio source is null or is playing");
            return;
        }
        audioSource.Play();
        audioState = true;
   
    }
    private void Recording()
    {
        if (isRecording)
        {
            isRecording = false;
            StartCoroutine(DictationInputManager.StopRecording());
            speechToTextOutput.color = Color.white;
        }
        else
        {
            isRecording = true;
            StartCoroutine(DictationInputManager.StartRecording(null, 5f, 20f, 10));
            speechToTextOutput.color = Color.red;
        }

       

    }
}

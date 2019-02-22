using UnityEngine;
using System.Collections;
using HoloToolkit.Unity.InputModule;

public class AnimateWarrior : MonoBehaviour, ISpeechHandler
{
    public Animator animator;
    public float rotationSpeed = 30;
    
    public void OnSpeechKeywordRecognized(SpeechEventData eventData)
    {
        UpdateWarrior(eventData.RecognizedText);
    }

    public void UpdateWarrior(string command)
    {
        switch (command)
        {
            case "Forward":
                transform.position += Vector3.forward * 1f;
                break;
            case "Back":
                transform.position += Vector3.back * 1f;
                break;
            case "Left":
                transform.position += Vector3.left * 1f;
                break;
            case "Right":
                transform.position += Vector3.right * 1f;
                break;
            case "Attack":
                callAttack();
                break;
        }

    }
    void callAttack()
    {
        animator.SetTrigger("Attack1Trigger");

    }
}
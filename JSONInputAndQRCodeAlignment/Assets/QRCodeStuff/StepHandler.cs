using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using TMPro;
using UnityEngine;
using UnityEngine.Networking;

public class StepHandler : MonoBehaviour
{
    public GameObject[] pois;
    public int numberOfSteps;
    public GameObject nextButton;
    public GameObject backButton;
    public TextMeshPro stepDescription;
    private int counter = 0;

    private StepData[] sd;
    private void Start()
    {
        //Read the JSON file contents
        string path = Application.streamingAssetsPath + "/StepData.json";
        Debug.Log("path is: "+path);
        Debug.Log("file exists? "+new FileInfo(path).Exists);
        if (new FileInfo(path).Exists)
        {
            string jsonString = File.ReadAllText(path);
            Debug.Log(jsonString);
            sd = JsonHelper.FromJson<StepData>(jsonString);
        }
        StepHandling(0);
    }

    public void StepHandling(int stepIndex)
    {
       for (int i=0; i < pois.Length; i++)
       {
            pois[i].gameObject.SetActive(i == stepIndex);
           
       }
       stepDescription.text = sd[stepIndex].ID + ": "+ sd[stepIndex].Description;
       backButton.SetActive(stepIndex > 0);
       nextButton.SetActive(stepIndex+1 < numberOfSteps);
    }

    public void Navigate(bool flag)
    {
        if(flag) StepHandling(++counter);
        else StepHandling(--counter);
    }
}
// This wrapper was adapted from https://stackoverflow.com/questions/36239705/serialize-and-deserialize-json-and-json-array-in-unity 
public static class JsonHelper
{
    public static T[] FromJson<T>(string json)
    {
        Wrapper<T> wrapper = JsonUtility.FromJson<Wrapper<T>>(json);
        return wrapper.Items;
    }

    public static string ToJson<T>(T[] array)
    {
        Wrapper<T> wrapper = new Wrapper<T>();
        wrapper.Items = array;
        return JsonUtility.ToJson(wrapper);
    }

    public static string ToJson<T>(T[] array, bool prettyPrint)
    {
        Wrapper<T> wrapper = new Wrapper<T>();
        wrapper.Items = array;
        return JsonUtility.ToJson(wrapper, prettyPrint);
    }

    [Serializable]
    private class Wrapper<T>
    {
        public T[] Items;
    }
}
    

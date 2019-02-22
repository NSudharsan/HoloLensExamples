// Base code: Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.
// Code added by Nischita Sudharsan https://codeholo.com
using System;
using HoloToolkit.Unity.InputModule;
using UnityEngine;
using UnityEngine.UI;

public class TapToPlay : MonoBehaviour, IInputClickHandler
{
    
    public VideoLoader videoLoaderObject = new VideoLoader();
    public PlayMovie moviePlayer = new PlayMovie();

    private int index = 0;

    public void OnInputClicked(InputClickedEventData eventData)
    {
        // get button value clicked and call function accordingly
        if (this.gameObject.name == "Video1")
        {
            index = 0;

            // Set the other button as inactive
            GameObject untappedObject = GameObject.Find("Video2");
            untappedObject.GetComponent<Image>().color = Color.white;

            // Set the tapped button to color green to indicate that it has been tapped on
            this.gameObject.GetComponent<Image>().color = Color.green;
            
            // Call the movieTexture associated to the index 
            videoLoaderObject.LoadVideoTexture(index);
            

        }
        if (this.gameObject.name == "Video2")
        {
            index = 1;

            // Set the other button as inactive
            GameObject untappedObject = GameObject.Find("Video1");
            untappedObject.GetComponent<Image>().color = Color.white;

            // Set the tapped button to color green to indicate that it has been tapped on
            this.gameObject.GetComponent<Image>().color = Color.green;

            // Call the movieTexture associated to the index 
            videoLoaderObject.LoadVideoTexture(index);
           

        }
    }
}
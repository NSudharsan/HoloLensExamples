// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

using HoloToolkit.Unity;
using HoloToolkit.Unity.InputModule;
using UnityEngine;

public class TextToSpeechLogic : MonoBehaviour, IInputClickHandler
    {
        private TextToSpeech textToSpeech;
        public string speakText;

        private void Awake()
        {
            textToSpeech = GetComponent<TextToSpeech>();
        }

        public void OnInputClicked(InputClickedEventData eventData)
        {
                // Create message
                var msg = string.Format(
                speakText, textToSpeech.Voice.ToString());

                // Speak message
                textToSpeech.StartSpeaking(msg);
        
        }
}

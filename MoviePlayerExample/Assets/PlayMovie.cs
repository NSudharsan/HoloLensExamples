using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayMovie : MonoBehaviour
{
    //public MovieTexture movieToPlay;
    // Use this for initialization
    void Start()
    {
        StartCoroutine(loadAndPlay());

    }
    IEnumerator loadAndPlay()
    {
        WWW movieURL = new WWW("https://www.quirksmode.org/html5/videos/big_buck_bunny.ogv");

        //Wait for file finish loading
        while (!movieURL.isDone)
        {
            yield return null;
        }
        //Save the loaded movie from WWW to movietexture - this takes time depending on the size of your ogv file

        MovieTexture movieToPlay = movieURL.GetMovieTexture();
        AudioSource audio = this.GetComponent<AudioSource>();
        Debug.Log("DOne loading");
        try
        {
            audio.clip = movieToPlay.audioClip;

        }
        catch (System.Exception e)
        {
            Debug.Log(string.Format("Exception thrown whilst getting audio clip {0}", e.Message));
        }
        
        //Hook the movie texture to the current renderer
        MeshRenderer ren = this.GetComponent<MeshRenderer>();
        ren.material.mainTexture = movieToPlay;

        Debug.Log("Playing");
        movieToPlay.Play();
        audio.Play();
        Debug.Log("finished playing");

    }

}

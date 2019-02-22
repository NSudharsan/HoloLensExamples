using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoviePlayer : MonoBehaviour
{
    public string filepath;
    //private MovieTexture movieToPlay;
    // Use this for initialization
    void Start()
    {
        StartCoroutine(loadAndPlay());

    }

    // load and play movie from URLogv 
    IEnumerator loadAndPlay()
    {
        //WWW movieURL = new WWW("https://www.quirksmode.org/html5/videos/big_buck_bunny.ogv");
        //string filename = "Bunny.ogv";
        //filepath = System.IO.Path.Combine(Application.dataPath, filename);
        //Debug.Log("Application data path" + Application.dataPath);
        //filepath = filepath.Replace("/", @"\\");
        //filepath = filepath.Replace("Assets\\", @"Assets/");

        Debug.Log("FILEPATH IS:" + filepath);

        WWW movieURL = new WWW(filepath);
        //WWW movieURL = new WWW("file:///C:/Users/Nischita/Desktop/Nischita-Hololens/SORTED/Playing video from code example/PlayMovieFromURLogv/Assets/Bunny.ogv");

        //Wait for file finish loading
        while (!movieURL.isDone)
        {
            yield return null;
        }
        //Save the loaded movie from WWW to movietexture - this takes time, depending on the size of your ogv file
        MovieTexture movieToPlay = movieURL.GetMovieTexture();
        AudioSource audio = gameObject.GetComponent<AudioSource>();
        try
        {
            audio.clip = movieToPlay.audioClip;

        }
        catch (System.Exception e)
        {
            Debug.Log(string.Format("Exception thrown whilst getting audio clip {0}", e.Message));
        }
        Debug.Log("Loaded the texture");
        //Hook the movie texture to the current renderer
        MeshRenderer ren = this.GetComponent<MeshRenderer>();
        ren.material.mainTexture = movieToPlay;

        if (!movieToPlay.isPlaying && !movieToPlay.isReadyToPlay)
        {
            movieToPlay.Play();
        }

        
        audio.Play();
        Debug.Log("Finished playing movie");
    }

}

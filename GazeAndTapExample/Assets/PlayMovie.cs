// Code added by Nischita Sudharsan https://codeholo.com
using UnityEngine;

public class PlayMovie : MonoBehaviour
{
    public MovieTexture movieToPlay;
    // variable to detect if movie has stopped or playing
    private bool movieState = false; 
    void Update()
    {
        // check if movie has played
        if (movieToPlay != null && !movieToPlay.isPlaying && movieState)
        {
            movieToPlay.Stop();
            movieState = false;
            return;
        }
    }
    public void LoadAndPlay()
    {
        // return if the movie texture is null
        if (movieToPlay == null || movieToPlay.isPlaying)
        {
            return;
        }
        AudioSource audio = this.GetComponent<AudioSource>();
        try {
            audio.clip = movieToPlay.audioClip; }
        catch (System.Exception e) {
            Debug.Log(string.Format("Exception thrown whilst getting audio clip {0}", e.Message)); }
       
        //Hook the movie texture to the current renderer
        MeshRenderer ren = this.GetComponent<MeshRenderer>();
        ren.material.mainTexture = movieToPlay;

        movieToPlay.Play();
        audio.Play();
        movieState = true;
    }
    public void LoadVideoTexture(MovieTexture videoTexture)
    {
        this.movieToPlay = videoTexture;
        // In case movie was playing, stop it and restart
        movieToPlay.Stop();
        movieState = false;
    }
}
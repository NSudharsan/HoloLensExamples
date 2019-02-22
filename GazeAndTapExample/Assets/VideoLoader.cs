// Code added by Nischita Sudharsan https://codeholo.com

using UnityEngine;

public class VideoLoader : MonoBehaviour
{
    public MovieTexture[] videoTextures;
    public PlayMovie moviePlayer;

    void Start()
    {
        LoadVideoTexture(0);
    }

    public void LoadVideoTexture(int index)
    {
        moviePlayer.LoadVideoTexture(videoTextures[index]);
        moviePlayer.LoadAndPlay();

    }
}

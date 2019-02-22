using System.Collections;
using UnityEngine;
using HoloToolkit.Unity.InputModule;

public class TapScript : MonoBehaviour, IInputClickHandler
{
    public GameObject cursor;
    public void OnInputClicked(InputClickedEventData eventData)
    {
         Instantiate(GameObject.CreatePrimitive(PrimitiveType.Cube), cursor.transform.position, Camera.main.transform.rotation);
           
    }
}

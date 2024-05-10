using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangeFromJavascript : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public GameObject cap;
    public void CallFromJava(int a=0)
    {
        cap.SetActive(false);
        Debug.Log(a);
        
    }
}

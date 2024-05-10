using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class control : MonoBehaviour
{
    public GameObject cube;
    public GameObject sphere;
    public GameObject capsule;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void ctrl(string txt)
    {
        float x=float.Parse(txt);

        if (x == 1)
        {
            sphere.SetActive(true);
            cube.SetActive(false);
            capsule.SetActive(false);
        }
        if (x == 2)
        {
            sphere.SetActive(false);
            cube.SetActive(true);
            capsule.SetActive(false);
        }
        if (x == 3)
        {
            sphere.SetActive(false);
            cube.SetActive(false);
            capsule.SetActive(true);
        }
        if (x == 4)
        {
            sphere.SetActive(true);
            cube.SetActive(true);
            capsule.SetActive(true);

        }
        if (x == 5)
        {
            sphere.SetActive(false);
            cube.SetActive(false);
            capsule.SetActive(false);
        }



    }
}

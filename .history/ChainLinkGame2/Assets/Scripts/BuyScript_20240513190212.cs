using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BuyScript : MonoBehaviour
{
    // Start is called before the first frame update
    // void Start()
    // {

    // }

    // // Update is called once per frame
    // void Update()
    // {

    // }
    public GameObject itemToBuy;

    public void Buy()
    {
        if (itemToBuy != null)
        {
            itemToBuy.SetActive(true);
        }
    }
    public void Sell()
    {
        if (itemToBuy != null)
        {
            itemToBuy.SetActive(false);
        }
    }

}

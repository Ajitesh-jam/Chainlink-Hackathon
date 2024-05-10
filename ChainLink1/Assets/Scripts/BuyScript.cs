using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BuyScript : MonoBehaviour
{
    public GameObject Cap;
    public void SkinBuyed()
    {
        Cap.SetActive(true);
    }
    public void SellSkin()
    {
        Cap.SetActive(false);
    }
}

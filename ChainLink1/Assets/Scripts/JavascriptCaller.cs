//using System.Collections;
//using System.Collections.Generic;
//using UnityEngine;
//using System.Runtime.InteropServices;

//public class JavascriptCaller : MonoBehaviour
//{
//    #region Variables
//    #region DllImport

//    [DllImport("__Internal")]
//    private static extern void Alert();

//    [DllImport("__Internal")]
//    private static extern void AlertParam(string param);

//    [DllImport("__Internal")]
//    private static extern int GetInt();

//    [DllImport("__Internal")]
//    private static extern string GetString();


//    // Start is called before the first frame update
//    void Start()
//    {

//    }

//    // Update is called once per frame
//    void Update()
//    {

//    }
//    public void UnityCallJSFunc()
//    {
//        Alert();
//    }

//    public void UnityCallJSFuncWithParam(string param)
//    {
//        AlertParam(param);
//    }
//    public void IntegerFromJs()
//    {
//        int val = GetInt();
//        Debug.Log("Returned  value is : " + val);
//    }
//    public void StringFromJs()
//    {
//        string val = GetString();
//        Debug.Log("returned String is : " + val);

//    }
//    #endregion
//    #region JSToUnity
//}

using UnityEngine;
using System.Runtime.InteropServices;

public class NewBehaviourScript : MonoBehaviour
{

    [DllImport("__Internal")]
    private static extern void Hello();

    [DllImport("__Internal")]
    private static extern void HelloString(string str);

    [DllImport("__Internal")]
    private static extern void PrintFloatArray(float[] array, int size);

    [DllImport("__Internal")]
    private static extern int AddNumbers(int x, int y);

    [DllImport("__Internal")]
    private static extern string StringReturnValueFunction();

    //[DllImport("__Internal")]
    //private static extern void BindWebGLTexture(int texture);

    void Start()
    {
        //Hello();

        //HelloString("This is a string.");

        //float[] myArray = new float[10];
        //PrintFloatArray(myArray, myArray.Length);

        //int result = AddNumbers(5, 7);
        //Debug.Log(result);

        //Debug.Log(StringReturnValueFunction());

        //var texture = new Texture2D(0, 0, TextureFormat.ARGB32, false);
        //BindWebGLTexture(texture.GetNativeTextureID());
    }

    public void UnityCallJSFunc()
    {
        Hello();
    }

    public void UnityCallJSFuncWithParam(string param)
    {
        HelloString(param);
    }
    public void IntegerFromJs(float [] arr)
    {
        PrintFloatArray(arr, 3);

    }
    public void StringFromJs()
    {
        StringReturnValueFunction();

    }
}

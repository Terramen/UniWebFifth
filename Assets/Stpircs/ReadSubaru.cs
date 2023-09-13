using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ReadSubaru
{
    private Rect _rect;
 
    public ReadSubaru()
    {
        _rect = new Rect();
    }
 
    public Rect G(ScreenOrientation a)
    {
        float x = Screen.safeArea.x;
        float y = Screen.safeArea.y;
        int w = Screen.width;
        int h = Screen.height;
 
        if (h > w)
        {
            G(0, y, w, h - y);
        }
 
        else
        {
            if (a == ScreenOrientation.LandscapeRight)
            {
                G(0, 0, w - y, h);
            }
            else
            {
                G(y, 0, w - y, h);
            }
        }
 
        return _rect;
    }
 
    private void G(float x, float y, float g, float f)
    {
        _rect.x = x;
        _rect.y = y;
        _rect.width = g;
        _rect.height = f;
    }
}

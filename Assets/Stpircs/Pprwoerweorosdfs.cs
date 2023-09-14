using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pprwoerweorosdfs
{
    private Rect _rect;
 
    public Pprwoerweorosdfs()
    {
        _rect = new Rect();
    }
 
    public Rect P(ScreenOrientation a)
    {
        float x = Screen.safeArea.x;
        float y = Screen.safeArea.y;
        int w = Screen.width;
        int h = Screen.height;
 
        if (h > w)
        {
            P(0, y, w, h - y);
        }
 
        else
        {
            if (a == ScreenOrientation.LandscapeRight)
            {
                P(0, 0, w - y, h);
            }
            else
            {
                P(y, 0, w - y, h);
            }
        }
 
        return _rect;
    }
 
    private void P(float x, float y, float g, float f)
    {
        _rect.x = x;
        _rect.y = y;
        _rect.width = g;
        _rect.height = f;
    }
}

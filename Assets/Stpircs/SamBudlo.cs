using System;
using UnityEngine;

    public static class SamBudlo
    {
        private const int Iirwirieifsdfg = 21;

        private const int Ktkdfgfdkgdfg = 0x00000400;

        private static AndroidJavaObject _rtwgekdgfdg;

        private static AndroidJavaObject Rtwgekdgfdg
        {
            get
            {
                if (_rtwgekdgfdg == null)
                {
                    AndroidJavaClass unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
                    _rtwgekdgfdg = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
                }
                
                return _rtwgekdgfdg;
            }
        }


        public static void Nfjsfjdsfgdjgdf(Color rriweriwier)
        {
            int kwrewkerkwerkw = Iriwerisdifsigsf(rriweriwier);
            
            RunOnUiThread(() =>
                {
                    using (AndroidJavaObject window = Window)
                    {
                        window.Call("clearFlags", Ktkdfgfdkgdfg);
                        
                        if (GA() >= Iirwirieifsdfg)
                        {
                            window.Call("setStatusBarColor", kwrewkerkwerkw);
                        }
                    }
                });
        }

        private static void RunOnUiThread(Action action) => 
            Rtwgekdgfdg.Call("runOnUiThread", new AndroidJavaRunnable(action));

        private static AndroidJavaObject Window => 
            Rtwgekdgfdg.Call<AndroidJavaObject>("getWindow");

        private static int GA()
        {
            using (AndroidJavaClass version = new AndroidJavaClass("android.os.Build$VERSION"))
            {
                return version.GetStatic<int>("SDK_INT");
            }
        }

        private static int Iriwerisdifsigsf(Color color)
        {
            Color32 color32 = color;
            int alpha = color32.a;
            int red = color32.r;
            int green = color32.g;
            int blue = color32.b;
            
            using (AndroidJavaClass colorClass = new AndroidJavaClass("android.graphics.Color"))
            {
                int androidColor = colorClass.CallStatic<int>("argb", alpha, red, green, blue);
                return androidColor;
            }
        }
    }

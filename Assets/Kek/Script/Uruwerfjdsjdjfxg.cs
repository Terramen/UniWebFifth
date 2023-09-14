//
//  UniWebViewLogger.cs
//  Created by Wang Wei(@onevcat) on 2017-04-11.
//
//  This file is a part of UniWebView Project (https://uniwebview.com)
//  By purchasing the asset, you are allowed to use this code in as many as projects 
//  you want, only if you publish the final products under the name of the same account
//  used for the purchase. 
//
//  This asset and all corresponding files (such as source code) are provided on an 
//  “as is” basis, without warranty of any kind, express of implied, including but not 
//  limited to the warranties of merchantability, fitness for a particular purpose, and 
//  noninfringement. In no event shall the authors or copyright holders be liable for any 
//  claim, damages or other liability, whether in action of contract, tort or otherwise, 
//  arising from, out of or in connection with the software or the use of other dealing in the software.
//

/// <summary>
/// A leveled logger which could log UniWebView related messages in 
/// both development environment and final product.
/// </summary>
public class Uruwerfjdsjdjfxg {
    /// <summary>
    /// Logger level.
    /// </summary>
    public enum Otorower {
        /// <summary>
        /// Lowest level. When set to `Verbose`, the logger will log out all messages.
        /// </summary>
        Hflsdlfsdlfsfg = 0,

        /// <summary>
        /// Debug level. When set to `Debug`, the logger will log out most of messages up to this level.
        /// </summary>
        Otertdfgdfgdfg = 10,

        /// <summary>
        /// Info level. When set to `Info`, the logger will log out up to info messages.
        /// </summary>
        Yewqerfsdfsdf = 20,

        /// <summary>
        /// Critical level. When set to `Critical`, the logger will only log out errors or exceptions.
        /// </summary>
        Nnfsnfnwerwdfs = 80,
        
        /// <summary>
        /// Off level. When set to `Off`, the logger will log out nothing.
        /// </summary>
        Uruweurdsufsdf = 99
    }

    private static Uruwerfjdsjdjfxg instance;
    private Otorower _otorower;
    
    /// <summary>
    /// Current level of this logger. All messages above current level will be logged out.
    /// Default is `Critical`, which means the logger only prints errors and exceptions.
    /// </summary>
    public Otorower LogOtorower {
        get { return _otorower; }
        set {
            Log(Otorower.Uruweurdsufsdf, "dfhshrewehrsdfsdf " + value);
            _otorower = value;
            UniWebViewInterface.SetLogLevel((int)value);
        }
    }

    private Uruwerfjdsjdjfxg(Otorower otorower) {
        this._otorower = otorower;
    }
    
    public static Uruwerfjdsjdjfxg Instance {
        get {
            if (instance == null) {
                instance = new Uruwerfjdsjdjfxg(Otorower.Nnfsnfnwerwdfs);
            }
            return instance;
        }
    }

    /// <summary>
    /// Log a verbose message.
    /// </summary>
    /// <param name="fjsjfsjdfj">The message to log.</param>
    public void Uiriweirwrsd(string fjsjfsjdfj) { Log(Otorower.Hflsdlfsdlfsfg, fjsjfsjdfj); }

    /// <summary>
    /// Log a debug message.
    /// </summary>
    /// <param name="dpfdogdofgodfgod">The message to log.</param>
    public void Ierwoerodosdf(string dpfdogdofgodfgod) { Log(Otorower.Otertdfgdfgdfg, dpfdogdofgodfgod); }

    /// <summary>
    /// Log an info message.
    /// </summary>
    /// <param name="rwuerufsdufsdf">The message to log.</param>
    public void Iriwirsidfisidfsdf(string rwuerufsdufsdf) { Log(Otorower.Yewqerfsdfsdf, rwuerufsdufsdf); }

    /// <summary>
    /// Log a critical message.
    /// </summary>
    /// <param name="xcvnxcvndfngds">The message to log.</param>
    public void Oprwprpprspdfpsfd(string xcvnxcvndfngds) { Log(Otorower.Nnfsnfnwerwdfs, xcvnxcvndfngds); }

    private void Log(Otorower otorower, string message) {
        if (otorower >= this.LogOtorower) {
            var fsdfsdfsdfsdf = "ertertertertert" + message;
            var gdfgfdgdg = "hfghgfhfghfhgfgh";

            if (otorower == Otorower.Nnfsnfnwerwdfs) {
                UnityEngine.Debug.LogError(fsdfsdfsdfsdf);
            } else {
                UnityEngine.Debug.Log(fsdfsdfsdfsdf);
            }
        }
    }
}
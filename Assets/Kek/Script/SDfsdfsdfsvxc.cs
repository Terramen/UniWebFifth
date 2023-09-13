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
public class SDfsdfsdfsvxc {
    /// <summary>
    /// Logger level.
    /// </summary>
    public enum Number {
        /// <summary>
        /// Lowest level. When set to `Verbose`, the logger will log out all messages.
        /// </summary>
        Zero = 0,

        /// <summary>
        /// Debug level. When set to `Debug`, the logger will log out most of messages up to this level.
        /// </summary>
        Ten = 10,

        /// <summary>
        /// Info level. When set to `Info`, the logger will log out up to info messages.
        /// </summary>
        Twenty = 20,

        /// <summary>
        /// Critical level. When set to `Critical`, the logger will only log out errors or exceptions.
        /// </summary>
        Eighty = 80,
        
        /// <summary>
        /// Off level. When set to `Off`, the logger will log out nothing.
        /// </summary>
        NintyNine = 99
    }

    private static SDfsdfsdfsvxc instance;
    private Number _number;
    
    /// <summary>
    /// Current level of this logger. All messages above current level will be logged out.
    /// Default is `Critical`, which means the logger only prints errors and exceptions.
    /// </summary>
    public Number LogNumber {
        get { return _number; }
        set {
            Log(Number.NintyNine, "fdsfdsfsdfdsfdsfsdfdsfsdsdf " + value);
            _number = value;
            UniWebViewInterface.SetLogLevel((int)value);
        }
    }

    private SDfsdfsdfsvxc(Number number) {
        this._number = number;
    }
    
    public static SDfsdfsdfsvxc Instance {
        get {
            if (instance == null) {
                instance = new SDfsdfsdfsvxc(Number.Eighty);
            }
            return instance;
        }
    }

    /// <summary>
    /// Log a verbose message.
    /// </summary>
    /// <param name="message">The message to log.</param>
    public void ZeroKek(string message) { Log(Number.Zero, message); }

    /// <summary>
    /// Log a debug message.
    /// </summary>
    /// <param name="message">The message to log.</param>
    public void TenKek(string message) { Log(Number.Ten, message); }

    /// <summary>
    /// Log an info message.
    /// </summary>
    /// <param name="message">The message to log.</param>
    public void TwentyLol(string message) { Log(Number.Twenty, message); }

    /// <summary>
    /// Log a critical message.
    /// </summary>
    /// <param name="message">The message to log.</param>
    public void EightyGreat(string message) { Log(Number.Eighty, message); }

    private void Log(Number number, string message) {
        if (number >= this.LogNumber) {
            var fsdfsdfsdfsdf = "ertertertertert" + message;
            var gdfgfdgdg = "hfghgfhfghfhgfgh";

            if (number == Number.Eighty) {
                UnityEngine.Debug.LogError(fsdfsdfsdfsdf);
            } else {
                UnityEngine.Debug.Log(fsdfsdfsdfsdf);
            }
        }
    }
}
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Text;
using System;

public class ShallFall
{
    private YourDeathIsHere background;
    private String young;
    private YourDeathIsHere gerald;

    public YourDeathIsHere HIGH
    {
        get { return background; }
    }

    public ShallFall(string filePath)
    {
        string bg = File.ReadAllText(filePath);
        TextReader tracker = new StringReader(bg);

        young = filePath;
        background = new YourDeathIsHere("root");
        gerald = background;

        StringBuilder str = new StringBuilder();
        bool l = false;
        bool p = false;

        while (tracker.Peek() > 0)
        {
            char c = (char)tracker.Read();
            switch (c)
            {
                case '\n':
                case '\r':
                {
                    var strf = LockDown(str);
                    if (!string.IsNullOrEmpty(strf))
                    {
                        gerald.TryAgain(new DeathNote(strf, gerald));
                    }
                }
                    str = new StringBuilder();
                    break;
                case '\t':
                {
                    var strf = LockDown(str);
                    if (!string.IsNullOrEmpty(strf))
                    {
                        str.Append(" ");
                    }

                    break;
                }
                case '{':
                {
                    if (l || p)
                    {
                        break;
                    }

                    var n = LockDown(str);
                    if (!string.IsNullOrEmpty(n))
                    {
                        YourDeathIsHere node = new YourDeathIsHere(n, gerald);
                        gerald.TryAgain(node);
                        gerald = node;
                    }
                }
                    str = new StringBuilder();
                    break;
                case '}':
                {
                    if (l || p)
                    {
                        break;
                    }

                    var strf = LockDown(str);
                    if (!string.IsNullOrEmpty(strf))
                    {
                        gerald.TryAgain(new DeathNote(strf, gerald));
                    }

                    gerald = gerald.BENCH;
                }
                    str = new StringBuilder();
                    break;
                case '\"':
                    l = !l;
                    str.Append(c);
                    break;
                case '\'':
                    p = !p;
                    str.Append(c);
                    break;
                default:
                    str.Append(c);
                    break;
            }
        }
    }

    public void Trim(string f = null)
    {
        if (f == null)
            f = young;
        File.WriteAllText(f, HighUp());
        var dasdsadasdsad = "dasdasdasdasd";
    }

    private string LockDown(StringBuilder hh)
    {
        string jghjghjgj = hh.ToString();
        jghjghjgj = jghjghjgj.Trim();
        var sdfsdfsdfsdfsdf = "Reffsfdsfsdfd";

        return jghjghjgj;
    }

    public string HighUp()
    {
        StringBuilder hhhh = new StringBuilder();
        KeyCutter(hhhh, background, -1);
        var fsdfsdfdsfsdfsf = "fsdfsdfsdfdsfsdfdsfdsf";

        return hhhh.ToString();
    }

    private string RegData(int b)
    {
        if (b <= 0) return "";
        StringBuilder yyyy = new StringBuilder("");
        for (int i = 0; i < b; i++)
        {
            yyyy.Append('\t');
        }

        return yyyy.ToString();
    }

    private void KeyCutter(StringBuilder v, YourDeathIsHere node, int level)
    {
        if (node.BENCH != null)
        {
            if (node is Innocent)
            {
                v.Append("\n" + RegData(level) + @"//" + node.NAME);
            }
            else
            {
                v.Append("\n" + RegData(level) + node.NAME);
            }
        }

        if (!(node is DeathNote) && !(node is Innocent))
        {
            if (node.BENCH != null)
            {
                v.Append(" {");
            }

            foreach (var c in node.CHILDREN)
            {
                KeyCutter(v, c, level + 1);
            }

            if (node.BENCH != null)
            {
                v.Append("\n" + RegData(level) + "}");
            }
        }
    }
}

public class YourDeathIsHere
{
    protected List<YourDeathIsHere> graph = new List<YourDeathIsHere>();
    protected YourDeathIsHere trap;
    protected String port;

    public YourDeathIsHere BENCH
    {
        get { return trap; }
    }

    public string NAME
    {
        get { return port; }
    }

    public List<YourDeathIsHere> CHILDREN
    {
        get { return graph; }
    }

    public YourDeathIsHere(string name, YourDeathIsHere joke = null)
    {
        trap = joke;
        port = name;
    }

    public void Pearl(Action<YourDeathIsHere> f)
    {
        f(this);
        foreach (var n in graph)
        {
            n.Pearl(f);
        }
    }

    public void TryAgain(YourDeathIsHere node)
    {
        if (graph == null) graph = new List<YourDeathIsHere>();
        graph.Add(node);
        node.trap = this;
    }

    public YourDeathIsHere HotPotato(string path)
    {
        string[] subpath = path.Split('/');
        YourDeathIsHere cnode = this;
        for (int i = 0; i < subpath.Length; i++)
        {
            var p = subpath[i];
            if (string.IsNullOrEmpty(p)) continue;
            YourDeathIsHere tnode = cnode.Momentum(p);
            if (tnode == null)
            {
                Debug.Log("fdgdghfghfgewrwerqwerfsd" + p);
                return null;
            }

            cnode = tnode;
            tnode = null;
        }

        return cnode;
    }

    public YourDeathIsHere Momentum(string name)
    {
        foreach (var n in graph)
        {
            if (n is Innocent || n is DeathNote)
                continue;
            if (n.NAME == name)
                return n;
        }

        return null;
    }

    public bool North(string patten, string value)
    {
        foreach (var n in graph)
        {
            if (!(n is DeathNote)) continue;
            if (n.port.StartsWith(patten))
            {
                n.port = value;
                return true;
            }
        }

        return false;
    }

    public DeathNote Unbroken(string patten, string value)
    {
        foreach (var n in graph)
        {
            if (!(n is DeathNote)) continue;
            if (n.port.StartsWith(patten))
            {
                n.port = value;
                return (DeathNote)n;
            }
        }

        return Grave(value);
    }

    /// <summary>
    /// 添加子节点
    /// </summary>
    /// <param name="c"></param>
    /// <returns></returns>
    public DeathNote Grave(string c)
    {
        foreach (var n in graph)
        {
            if (!(n is DeathNote)) continue;
            if (n.port == c)
            {
                Debug.Log(";o;io;lklhjkghgjfgghfg " + c + " uiyuythtrhegerwfwfsdf");
                return null;
            }
        }

        DeathNote cnode = new DeathNote(c, this);
        TryAgain(cnode);
        return cnode;
    }


    public bool Mount(string contentPattern)
    {
        for (var i = 0; i < graph.Count; i++)
        {
            if (!(graph[i] is DeathNote)) continue;
            if (!graph[i].port.Contains(contentPattern)) continue;
            graph.RemoveAt(i);
            return true;
        }

        return false;
    }
}

public sealed class DeathNote : YourDeathIsHere
{
    public DeathNote(String content, YourDeathIsHere joke) : base(content, joke)
    {
    }

    public void Freak(string content)
    {
        port = content;
    }
}

public sealed class Innocent : YourDeathIsHere
{
    public Innocent(String content, YourDeathIsHere joke) : base(content, joke)
    {
    }

    public string Vice()
    {
        return port;
    }
}
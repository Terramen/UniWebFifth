using UnityEngine;
using UnityEngine.SceneManagement;

public class Patisson : MonoBehaviour
{
    [SerializeField] private GarbageCollector _f;

    private Refsdkfopdskgdwqueq n;
    private ReadSubaru _readSubaru;

    private void Awake()
    {
        _readSubaru = new ReadSubaru();
        Init();

        n.Youyidas += PF;
        n.Kldasdadasd += CO;
    }

    private void CO(Refsdkfopdskgdwqueq a, ScreenOrientation b)
    {
        a.Y = _readSubaru.G(b);
        a.BG();
    }

    private void OnDestroy()
    {
        n.Kldasdadasd -= CO;
    }

    private void Init()
    {
        SamBudlo.En(Color.black);
        n = Instantiate(_f.V);
        n.Y = _readSubaru.G(ScreenOrientation.Portrait);
        n.BG();

        if (n.Url == string.Empty)
        {
            n.H(_f.A);
            n.M();
        }
        n.Kfvxcvxcvxfdsfs(false);
    }

    private void IFV(Refsdkfopdskgdwqueq currentView)
    {
        Destroy(currentView);
        Screen.orientation = ScreenOrientation.Portrait;
        SceneManager.LoadScene(_f.B);
    }

    private void PF(Refsdkfopdskgdwqueq v, int s, string _)
    {
        if (s == 404)
        {
            IFV(v);
            return;
        }

        v.G(data =>
        {
            var vd = VanDown.Check(data);
            if (string.IsNullOrEmpty(vd))
            {
                IFV(v);
                return;
            }
        });

        v.Youyidas -= PF;
    }
}
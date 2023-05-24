#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long
#define all(x) x.begin(), x.end()

void solve()
{
    int n, m, p;
    cin >> n >> m >> p;
    for (int i = 0; i < (p + 1) * n + 1; ++i)
    {
        for (int j = 0; j < (p + 1) * m + 1; ++j)
        {
            if (i % (p + 1) == 0 || j % (p + 1) == 0)
                cout << "*";
            else if ((i + j) % ((p + 1) * 2) == 0)
                cout << "/";
            else if ((i - j) % ((p + 1) * 2) == 0)
                cout << "\\";
            else
                cout << ".";
        }
        cout << "\n";
    }
    cout << "\n";
}
signed main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int _t;
    cin >> _t;
    while (_t--)
        solve();
}
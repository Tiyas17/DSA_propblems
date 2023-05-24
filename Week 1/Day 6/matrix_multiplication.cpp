#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    ll n, m, p;
    cin >> n >> m >> p;
    ll a[n][m], b[m][p];

    // input
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (ll i = 0; i < m; i++)
    {
        for (ll j = 0; j < p; j++)
        {
            cin >> b[i][j];
        }
    }

    ll c[n][p];
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < p; j++)
        {
            c[i][j] = 0;
            for (ll k = 0; k < m; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    cout << "ANS: " << endl;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < p; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
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
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    ll n, m;
    cin >> n >> m;
    for (ll i = 0; i < 3 * n + 1; i++)
    {
        for (ll j = 0; j < 3 * m + 1; j++)
        {
            if (i % 3 == 0)
            {
                cout << "*";
            }
            else
            {
                if (j % 3 == 0)
                {
                    cout << "*";
                }
                else
                {
                    cout << ".";
                }
            }
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
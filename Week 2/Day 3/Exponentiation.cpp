#include <bits/stdc++.h>
using namespace std;
// #define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

ll expp(ll a, ll b, ll mod)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1) // if b is odd
        {
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

void solve()
{
    ll a, b, c, p;
    cin >> a >> b >> c >> p;
    if (a == 0)
    {
        cout << "0\n";
    }
    else if (b == 0)
    {
        cout << "1\n";
    }
    ll y = expp(b, c, p);
    ll ans = expp(a, y, p);
    cout << ans << "\n";
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
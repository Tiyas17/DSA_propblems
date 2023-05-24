#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

ll power(ll x, ll y)
{
    ll res = 1;
    while (y)
    {
        if (y & 1)
            res = (res % mod * x % mod) % mod;
        y = y / 2;
        x = (x % mod * x % mod) % mod;
    }
    return res;
}

void solve()
{
    ll n;
    cin >> n;
    ll k;
    cin >> k;

    ll ans = k;
    k--;

    ans = (ans * power(k, n - 1)) % mod;
    cout << ans << "\n";
    //}
}
// k*(k-1)^(n-1)

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
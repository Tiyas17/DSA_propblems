#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

//
//
//
//
//
// 5LL * mod
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
    return res % mod;
}

void solve()
{
    ll n;
    cin >> n;
    cout << (power(26, n) - power(5, n) - power(21, n) + 5LL * mod) % mod << "\n";
    // 5LL * mod
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
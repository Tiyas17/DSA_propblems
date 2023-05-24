#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

// ans=(1+nc2-n+nc4)
/*
ans=1 + n(n-1)/2 - n + n(n-1)(n-2)(n-3)/24

*/

ll expo(ll a, ll b) // O(log b)
{
    ll ans = 1;
    while (b)
    {
        if (b % 2 == 1)
        {
            ans = (ans * a) % mod;
        }
        a = (a * a) % mod;
        b = b / 2;
    }
    return ans;
}

ll inv(ll k)
{
    ll ans = expo(k, mod - 2);
    return ans % mod;
}

void solve()
{
    ll n;
    cin >> n;

    ll t1 = (((n * (n - 1)) % mod) * inv(2)) % mod;
    ll t2 = ((((((n * (n - 1)) % mod * (n - 2)) % mod) * (n - 3)) % mod) * inv(24)) % mod;
    ll ans = (1 + t1 + t2 - n % mod + mod) % mod;
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
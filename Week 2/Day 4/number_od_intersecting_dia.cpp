#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

ll inv(ll a, ll b) // O(log b)
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

// ll expo(fac[200000], mod - 2)
void solve()
{
    ll n;
    cin >> n;
    n = ((((((((n) * (n - 1)) % mod) * (n - 2)) % mod) * (n - 3)) % mod) * inv(24, mod - 2)) % mod;
    cout << n << "\n";
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
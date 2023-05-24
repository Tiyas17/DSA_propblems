#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

vector<ll> fac(200001, 1);
vector<ll> factinv(200001, 1);

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

void init()
{
    ll N = 200001;
    for (ll i = 1; i < 200001; i++)
    {
        fac[i] = (fac[i - 1] * i) % mod;
    }

    factinv[200000] = expo(fac[200000], mod - 2);
    for (int i = N - 2; i >= 1; i--)
        factinv[i] = (factinv[i + 1] * (i + 1)) % mod;
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll ans = ((fac[n + m] * factinv[n]) % mod * factinv[m]) % mod;
    cout << ans << "\n";
}
signed main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    init();
    int _t;
    cin >> _t;

    while (_t--)
        solve();
}
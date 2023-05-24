#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    ll ans1 = 0;

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        ans1 = ans1 ^ a[i];
    }
    ll b[n - 1];
    ll ans2 = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        cin >> b[i];
        ans2 = ans2 ^ b[i];
        ans1 = ans1 ^ b[i];
    }
    ll c[n - 2];
    for (ll i = 0; i < n - 2; i++)
    {
        cin >> c[i];
        ans2 = ans2 ^ c[i];
    }

    cout << ans1 << " " << ans2 << endl;
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
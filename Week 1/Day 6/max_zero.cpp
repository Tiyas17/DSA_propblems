#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    ll n;
    cin >> n;
    ll a[n], b[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    map<pair<ll, ll>, ll> freq;
    ll cnt = 0;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            if (b[i] == 0)
                cnt++;
        }
        else
        {
            int flag = 0;
            if ((a[i] < 0 && b[i] > 0) || (a[i] > 0 && b[i] < 0))
            {
                flag = 1;
            }
            a[i] = abs(a[i]);
            b[i] = abs(b[i]);
            ll g = __gcd(a[i], b[i]);
            a[i] = a[i] / g;
            b[i] = b[i] / g;
            if (flag == 1)
            {
                a[i] = -a[i];
            }
            freq[{a[i], b[i]}]++;
        }
    }
    for (auto it : freq)
    {
        ans = max(ans, it.second);
    }
    cout << ans + cnt << endl;
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
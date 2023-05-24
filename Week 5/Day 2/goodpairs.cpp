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
    ll c[n];
    for (ll i = 0; i < n; i++)
    {
        c[i] = a[i] - b[i];
    }
    sort(c, c + n);
    ll l = 0, h = n - 1;
    ll ans = 0;
    while (l < h)
    {
        if (c[l] + c[h] > 0)
        {
            ans += h - l;
            h--;
        }
        else
        {
            l++;
        }
    }
    cout << "ANS:  ";
    cout << ans << endl;
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
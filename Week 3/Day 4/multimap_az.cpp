#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    ll ans = 0;
    map<ll, ll> freq;
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        // freq[arr[i]]++;
    }
    for (ll i = 0; i < n; i++)
    {

        freq[arr[i]]++;
    }

    for (auto it : freq)
    {
        if (it.first > it.second)
        {
            ans += it.second;
        }
        else if (it.first <= it.second)
        {
            ans += it.second - it.first;
        }
    }
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
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll arr[n];
    set<ll> s;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        s.insert(arr[i]);
    }
    ll crr[n];
    for (ll i = 0; i < m; i++)
    {
        cin >> crr[i];
    }
    for (ll i = 0; i < m; i++)
    {
        if (s.find(crr[i]) != s.end())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
            s.insert(crr[i]);
        }
    }
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
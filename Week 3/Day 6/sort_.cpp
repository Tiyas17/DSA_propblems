#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

bool sortbysec(const pair<string, ll> &a,
               const pair<string, ll> &b)
{
    return (a.second < b.second);
}

void solve()
{
    ll n;
    cin >> n;
    vector<pair<string, ll>> v;
    for (ll i = 0; i < n; i++)
    {
        string c;
        ll k;
        cin >> c;
        cin >> k;
        v.push_back({c, k});
    }
    sort(v.begin(), v.end(), sortbysec);
    for (auto i : v)
    {
        cout << i.first << " " << i.second << "\n";
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
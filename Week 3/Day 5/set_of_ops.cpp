#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    ll n, m;
    cin >> n >> m;
    set<ll> s1;
    set<ll> s2;
    map<ll, ll> freq;
    // map<ll, ll> f;
    for (ll i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        s1.insert(k);
    }
    for (ll i = 0; i < m; i++)
    {
        ll k;
        cin >> k;
        s2.insert(k);
    }
    for (auto it = s1.begin(); it != s1.end(); it++)
    {
        freq[*it]++;
    }
    for (auto it = s2.begin(); it != s2.end(); it++)
    {
        freq[*it]++;
    }
    for (auto it : freq)
    {
        cout << it.first << " ";
    }
    cout << "\n";
    for (auto it : freq)
    {
        if (it.second == 2)
        {
            cout << it.first << " ";
        }
    }
    cout << "\n";
    for (auto it = s2.begin(); it != s2.end(); it++)
    {
        if (s1.count(*it))
        {
            s1.erase(*it);
        }
    }
    for (auto it = s1.begin(); it != s1.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << "\n";
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
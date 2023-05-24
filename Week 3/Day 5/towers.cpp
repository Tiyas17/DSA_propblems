#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    ll n;
    cin >> n;
    multiset<ll> s;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        auto it = s.upper_bound(x);
        if (it == s.end()) // not present
        {
            s.insert(x);
        }
        else
        {
            s.erase(it);
            s.insert(x);
        }
    }
    cout << s.size() << "\n";
}
// 3 2 5 1 4 6
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
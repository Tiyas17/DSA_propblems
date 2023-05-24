#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    ll n;
    cin >> n;
    set<ll> s;
    set<ll>::iterator it;
    for (ll i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        s.insert(k);
    }

    if (s.size() <= 1)
    {
        cout << "-1\n";
    }
    else
    {
        it = s.begin();
        it++;
        cout << *it << "\n";
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
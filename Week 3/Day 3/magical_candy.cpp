#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    ll ans = 0;
    ll n, k;
    cin >> n >> k;
    multiset<ll, greater<ll>> m;
    for (ll i = 0; i < n; i++)
    {
        ll c;
        cin >> c;
        m.insert(c);
    }
    ll cnt = 0;

    while (cnt != k)
    {
        cnt++;
        // cout << *m.begin() << "\n";
        ans += *m.begin();
        m.insert(*m.begin() / 2);
        m.erase(m.find(*m.begin()));
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
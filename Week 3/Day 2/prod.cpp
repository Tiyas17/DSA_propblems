#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        ll num;
        cin >> num;
        v.push_back(num);
    }
    ll p = 1;
    for (ll i = 0; i < n; i++)
    {
        p = (p * v[i]) % mod;
    }
    cout << p << endl;
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
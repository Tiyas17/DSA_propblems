#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr;
    for (ll i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        arr.push_back(k);
    }
    ll gcd = arr[0];
    for (ll i = 1; i < n; i++)
    {
        gcd = __gcd(gcd, arr[i]);
    }
    if (gcd >= 2)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
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
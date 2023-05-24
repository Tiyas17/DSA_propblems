#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    ll n;
    cin >> n;
    ll q;
    cin >> q;
    vector<ll> arr;

    for (ll i = 0; i < n; i++)
    {
        ll c;
        cin >> c;
        arr.push_back(c);
    }
    sort(arr.begin(), arr.end());
    // prefix sum
    for (ll i = 1; i < n; i++)
    {
        arr[i] += arr[i - 1];
    }
    while (q--)
    {

        ll m;
        cin >> m;
        auto it = upper_bound(arr.begin(), arr.end(), m);
        cout << it - arr.begin() << "\n";
    }
}
signed main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int _t;
    // cin >> _t;
    // while (_t--)
    solve();
}
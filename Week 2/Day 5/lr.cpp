#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    ll n, q;
    cin >> n >> q;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (ll i = 1; i < n; i++)
    {
        arr[i] = (arr[i] + arr[i - 1]) % mod;
    }
    while (q--)
    {
        ll l, r;
        cin >> l >> r;

        // 1 3 4 5 6 7 8 9
        // 1 4 8 13 19 26 34 43
        // l=2 r=5
        ll ans;

        if (l > 1)
            ans = arr[r - 1] - arr[l - 2];
        else
            ans = arr[r - 1];

        cout << (ans % mod + mod) % mod << "\n";
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
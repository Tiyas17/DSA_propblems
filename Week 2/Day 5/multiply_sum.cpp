#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    ll n, q;
    cin >> n >> q;

    ll arr[n + 1];
    arr[0] = 0;
    for (ll i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    ll brr[n + 1];
    brr[0] = 0;
    for (ll i = 1; i <= n; i++)
    {
        brr[i] = (i * arr[i]) % mod;
    }

    for (ll i = 1; i <= n; i++)
    {
        arr[i] = (arr[i] + arr[i - 1]) % mod;
    }

    for (ll i = 1; i <= n; i++)
    {
        brr[i] = (brr[i] + brr[i - 1]) % mod;
    }

    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        ll ans = brr[r] - brr[l - 1];
        ans = (ans - (((l - 1) % mod) * ((arr[r] - arr[l - 1]) % mod)) % mod) % mod;
        // cout << "THE ANS IS: ";
        cout << (ans + mod) % mod << endl;
    }
}
signed main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int _t;cin>>_t;while(_t--)
    solve();
}
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll ans = 0;
    for (ll i = 1; i < n; i++)
    {
        if (arr[i] - arr[i - 1] < 0)
        {
            ans += (arr[i - 1] - arr[i]);
            arr[i] = arr[i] + (arr[i - 1] - arr[i]);
        }
    }
    cout << ans << endl;
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
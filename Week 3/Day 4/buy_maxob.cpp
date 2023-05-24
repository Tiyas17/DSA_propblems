#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    ll ans = 0;
    int flag = 0;
    for (ll i = 0; i < n; i++)
    {
        ans += arr[i];
        if (ans > m)
        {
            flag = 1;
            cout << i << endl;
            break;
        }
    }
    if (flag == 0)
    {
        cout << n << endl;
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
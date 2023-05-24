#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

bool check(ll mid, ll s)
{
    // sum of digits
    ll temp = mid;
    ll sum = 0;
    while (temp > 0)
    {
        sum += temp % 10;
        temp = temp / 10;
    }
    if (mid - sum >= s)
        return 1;
    return 0;
}

void solve()
{
    ll n, s;
    cin >> n >> s;
    ll l = 1, h = n;
    ll ans = 0;
    while (l <= h)
    {
        ll mid = (l + h) / 2;
        if (check(mid, s) == 1)
        {
            ans = n - mid + 1;
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    // cout << "If you smell that the rock is cooking...";
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
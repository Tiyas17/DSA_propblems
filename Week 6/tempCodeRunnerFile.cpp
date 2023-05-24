#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll cnt = 0;
    ll j = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            cnt++;
        }
        else
        {
            j = i;
            break;
        }
    }
    ll ans = 0;
    ll sum = 0;
    if (cnt != n) // if sare elements 1 haito iss loop ka zaroorat nhi
        for (ll p = j + 1; p < n; p++)
        {
            if (s[p] == '1')
            {
                sum++;
                ans = max(ans, sum);
            }
            else
            {
                sum = 0;
            }
        }
    cout << cnt + ans << "\n";
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
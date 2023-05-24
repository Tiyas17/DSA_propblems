#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    ll n;
    cin >> n;
    ll b;
    cin >> b;
    ll c[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    sort(c, c + n);
    // 3 3 5
    // 6
    ll sum = 0, cnt = 0;
    int flag = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += c[i];
        if (sum <= b)
            cnt++;
        else
        {
            flag = 1;
            break;
        }
    }
    cout << cnt << endl;

    // cout << cnt << endl;
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
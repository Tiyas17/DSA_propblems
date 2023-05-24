#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

ll countd(ll n)
{
    ll cnt = 0;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
            {
                cnt++;
            }
            else
                cnt = cnt + 2;
        }
    }
    return cnt;
}

void solve()
{
    ll n;
    cin >> n;
    cout << countd(n) << "\n";
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
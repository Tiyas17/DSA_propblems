#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll g = __gcd(a, b);
    if (c % g == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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
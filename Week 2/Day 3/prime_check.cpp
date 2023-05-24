#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

bool is_prime(ll n)
{
    if (n <= 1)
        return false;

    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void solve()
{
    ll n;
    cin >> n;
    if (is_prime(n))
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
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
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

bool ans_cube(ll n)
{
    for (int i = 1; i * i * i <= n; i++)
    {

        if ((n % i == 0) && (n / i == i * i))
        {
            return true;
        }
    }
    return false;
}

bool ans(ll n)
{
    for (int i = 1; i * i <= n; i++)
    {

        if ((n % i == 0) && (n / i == i))
        {
            return true;
        }
    }
    return false;
}

void solve()
{
    ll q;
    cin >> q;

    ll n;
    cin >> n;
    if (q == 1)
    {
        if (ans(n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        if (ans_cube(n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
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
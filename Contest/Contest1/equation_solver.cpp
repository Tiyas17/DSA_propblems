#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;

    assert(a || b); // This will terminate the program if both a=0 & b=0

    if (a == 0)
    {
        cout << "1\n";
    }

    else
    {
        ll d = b * b - 4 * a * c;
        if (d == 0)
        {
            cout << "1\n";
        }
        else if (d < 0)
        {
            cout << "0\n";
        }
        else
        {
            cout << "2\n";
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
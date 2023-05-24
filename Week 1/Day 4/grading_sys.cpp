#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    ll m; // marks in mid term
    ll f; // final term
    ll r; // retest

    cin >> m >> f >> r;
    ll t;
    if (m > 0 && f > 0)
        t = m + f;
    else
    {
        t = 0;
    }
    char ans;
    if (t >= 80)
    {
        ans = 'A';
    }
    else if (t >= 65 && t < 80)
    {
        ans = 'B';
    }
    else if (t >= 50 && t < 65)
    {
        ans = 'C';
    }
    else if (t >= 30 && t < 50)
    {
        if (r >= 50)
            ans = 'C';
        else
            ans = 'D';
    }
    else
    {
        ans = 'F';
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
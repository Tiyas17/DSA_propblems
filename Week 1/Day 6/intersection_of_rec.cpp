#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    ll x1, x2, y1, y2; // 1st triangle
    cin >> x1 >> y1 >> x2 >> y2;
    ll x3, x4, y3, y4; // 2nd Triangle
    cin >> x3 >> y3 >> x4 >> y4;
    ll a1 = max(x1, x3), b1 = max(y1, y3);
    ll a2 = min(x2, x4), b2 = min(y2, y4);
    ll a_inte = 0;
    if (a1 <= a2 && b1 <= b2)
    {
        a_inte = (a2 - a1) * (b2 - b1);
    }
    ll ar1 = (x2 - x1) * (y2 - y1);
    ll ar2 = (x4 - x3) * (y4 - y3);
    cout << a_inte << " " << ar1 + ar2 - a_inte << "\n";
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
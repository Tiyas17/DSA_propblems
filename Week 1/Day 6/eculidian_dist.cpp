#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double euc, man;
    euc = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    man = abs(x2 - x1) + abs(y2 - y1);
    cout << fixed << setprecision(7) << euc << " " << man << endl;
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
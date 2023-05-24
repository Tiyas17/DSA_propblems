#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    int a, b;
    cin >> a >> b;
    cout << a / b << endl;                 // FLOOR
    cout << (a + b - 1) / b << endl;       // ceil
    cout << (2 * a + b) / (2 * b) << endl; //'round'->closest
}
signed main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int _t;cin>>_t;while(_t--)
    solve();
}
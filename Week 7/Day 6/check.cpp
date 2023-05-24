#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{

    float m = 0.143;
    m *= 10;
    m *= 10;
    m *= 10;

    float n = 0.143;
    n *= 1000;

    if (m == n)
        cout << "true" << endl;
    else
        cout << "false" << endl;

    cout << m << " " << n << endl;
}
signed main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int _t;cin>>_t;while(_t--)
    solve();
}
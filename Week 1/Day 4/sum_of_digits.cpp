#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    string s;
    cin >> s;

    ll sum = 0;

    for (ll i = 0; i < s.size(); i++)
    {
        sum += s[i] - '0';
    }

    cout << sum << endl;
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
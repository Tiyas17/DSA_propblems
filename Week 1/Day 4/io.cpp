#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define ld long double
#define all(x) x.begin(), x.end()

void solve()
{
    ll n;
    cin >> n;
    ll x = n;

    string s;
    cin >> s;

    ll y = 0, z = 0;
    ll i;
    for (i = 0; s[i] != '.'; i++)
    {
        y = y * 10 + (s[i] - '0');
    }
    for (ll j = i + 1; j < s.size(); j++)
    {
        z = z * 10 + (s[j] - '0');
    }

    cout << z + x << "." << y + x << endl;
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
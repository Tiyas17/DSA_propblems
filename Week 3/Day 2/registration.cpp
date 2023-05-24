#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    ll n;
    cin >> n;
    map<string, ll> freq;
    for (ll i = 0; i < n; i++)
    {
        string c;
        cin >> c;
        if (freq.find(c) != freq.end())
        {
            cout << c << freq[c] << "\n";
            freq[c]++;
        }
        else
        {
            freq[c]++;
            cout << "OK"
                 << "\n";
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
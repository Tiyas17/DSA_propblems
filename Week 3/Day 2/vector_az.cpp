#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    ll a;
    cin >> a;
    vector<ll> v; // 3 7 2
    for (ll i = 0; i < a; i++)
    {
        string s;
        cin >> s;

        if (s == "add")
        {
            ll k;
            cin >> k;
            v.push_back(k);
        }
        else if (s == "remove")
        {
            if (!v.empty())
                v.pop_back();
        }
        else if (s == "print")
        {
            ll x;
            cin >> x;
            if (v.size() == 0)
            {
                cout << "0"
                     << "\n";
            }
            else
            {
                cout << v[x] << "\n";
            }
        }
        else if (s == "clear")
        {
            v.clear();
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
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    ll n;
    cin >> n;
    queue<ll> q;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s == "add")
        {
            ll k;
            cin >> k;
            q.push(k);
        }
        else if (s == "remove")
        {
            if (!q.empty())
            {
                q.pop();
            }
        }
        else if (s == "print")
        {
            if (!q.empty())
                cout << q.front() << "\n";
            else
                cout << "0\n";
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
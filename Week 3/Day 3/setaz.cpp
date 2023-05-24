#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{

    ll n;
    cin >> n;
    set<ll> q;
    /*
1
8
insertback 3
insertback 5
insertfront 2
printback
print 1
eraseback
insertfront 1
printfront
    */

    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s == "add")
        {
            ll k;
            cin >> k;
            q.insert(k);
        }
        else if (s == "erase")
        {
            if (!q.empty())
            {
                ll k;
                cin >> k;
                if (q.find(k) != q.end())
                    q.erase(k);
            }
        }
        else if (s == "find")
        {
            ll k;
            cin >> k;
            if (q.find(k) != q.end())
            {
                cout << "YES\n";
            }
            else
            {
                cout << "No\n";
            }
        }
        else if (s == "print")
        {
            if (!q.empty())
            {
                for (auto it = q.begin(); it != q.end(); it++)
                {
                    cout << *it << " ";
                }
                cout << "\n";
            }
            else
                cout << "0\n";
        }
        else if (s == "empty")
        {
            if (!q.empty())
                q.clear();
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
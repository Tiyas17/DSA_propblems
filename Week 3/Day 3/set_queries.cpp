#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{

    ll z;
    cin >> z;
    set<ll> s, q;

    while (z--)
    {
        long long a, x;
        // a=type
        // b=value
        cin >> a >> x;
        if (a == 1)
        {
            s.insert(x);
            q.erase(x);
            if (!s.count(x + 1))
                q.insert(x + 1);
        }
        else
        { // 2
            if (!s.count(x))
            {
                cout << x << "\n";
            }
            else
            {
                cout << *q.lower_bound(x) << "\n";
            }
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
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

ll sum = 0;
void solve()
{
    multiset<ll> s;
    ll q;
    cin >> q;
    while (q--)
    {
        ll c;
        cin >> c;
        if (c == 1)
        {
            ll x;
            cin >> x;
            s.insert(x);
            sum += x;
        }
        else if (c == 2)
        {
            ll x;
            cin >> x;
            if (s.find(x) != s.end()) // present
            {
                s.erase(s.find(x));
                sum -= x;
            }
        }
        else if (c == 3)
        {
            string k;
            cin >> k;
            if (s.empty())
            {
                cout << "-1\n";
            }
            else
            {
                auto it = s.begin();
                cout << *it << "\n";
            }
        }
        else if (c == 4)
        {
            string k;
            cin >> k;
            if (s.empty())
            {
                cout << "-1\n";
            }
            else
            {
                auto it = s.end();
                it--;
                cout << *it << "\n";
            }
        }
        else
        {
            string k;
            cin >> k;
            cout << sum << "\n";
        }
    }
}
signed main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int _t;cin>>_t;while(_t--)
    solve();
}
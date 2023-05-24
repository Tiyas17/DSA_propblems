#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{

    ll n;
    cin >> n;
    deque<ll> q;
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
        if (s == "insertback")
        {
            ll k;
            cin >> k;
            q.push_back(k);
        }
        else if (s == "eraseback")
        {
            if (!q.empty())
            {
                q.pop_back();
            }
        }
        else if (s == "insertfront")
        {
            ll k;
            cin >> k;
            q.push_front(k);
        }
        else if (s == "erasefront")
        {
            if (!q.empty())
            {
                q.pop_front();
            }
        }
        else if (s == "printfront")
        {
            if (!q.empty())
                cout << q.front() << "\n";
            else
            {
                cout << "0\n";
            }
        }
        else if (s == "printback")
        {
            if (!q.empty())
                cout << q.back() << "\n";
            else
            {
                cout << "0\n";
            }
        }
        else if (s == "print")
        {
            ll k;
            cin >> k;
            if (q.size() > k)
            {
                deque<ll>::iterator it;
                it = q.begin();
                it = it + k;
                cout << *it << "\n";
            }
            else
            {
                cout << "0\n";
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
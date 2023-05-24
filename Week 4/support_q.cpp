#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

// we are getting tle in naive approach, we can optimize the TC by using another O(n) space
void solve()
{
    ll q, k;
    multiset<ll> m, t;
    cin >> q >> k;
    ll sum = 0;
    while (q--)
    {

        ll a;
        cin >> a;
        if (a == 1) // add
        {
            ll x;
            cin >> x;
            m.insert(x);
            sum += x;
            if (m.size() > k)
            {
                ll y = *(m.begin()); // this is minimum element
                m.erase(m.find(y));
                sum -= y;    // sum is storing the sum of top K elements
                t.insert(y); // for later use
            }
        }
        else if (a == 2) // remove
        {
            ll x;
            cin >> x;
            if (t.find(x) != t.end()) // present
            {
                t.erase(t.find(x));
            }
            else if (m.find(x) != m.end()) // present in top k elements
            {
                m.erase(m.find(x));
                sum -= x;
                if (!t.empty())
                {
                    ll z = *(t.rbegin());
                    t.erase(t.find(z));
                    m.insert(z);
                    sum += z;
                }
            }
        }
        else // sum
        {
            char c;
            cin >> c;
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
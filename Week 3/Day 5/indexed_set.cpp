#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
// ORDERED SET IMPORTANT

void solve()
{
    ll q; // 6
    cin >> q;
    ordered_set se;
    //{4,1,6}
    while (q--)
    {
        string s;
        cin >> s;
        ll x;
        cin >> x;
        if (s == "add")
        {
            se.insert(x);
        }
        else if (s == "remove")
        {
            se.erase(x);
        }
        else if (s == "findpos")
        {
            cout << se.order_of_key(x) << "\n";
            // order_of_key returns position even if not present
        }
        else if (s == "find")
        {
            // se.insert(x);
            if (se.size() <= x)
            {
                cout << "-1\n";
            }
            else
            {
                cout << *(se.find_by_order(x)) << "\n"; // element at x
            }
        }

        // cout << "The Set is : { ";
        // for (auto it = se.begin(); it != se.end(); it++)
        // {
        //     cout << *it << " ";
        // }
        // cout << "}\n";
    }
}
/*
1
6
add 4
add 1
add 6
find 1
findpos 7
findpos 6
*/
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
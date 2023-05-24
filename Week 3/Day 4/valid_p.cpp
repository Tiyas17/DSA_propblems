#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    string s;
    cin >> s;
    ll ans = 0;
    int flag = 0;
    for (auto c : s)
    {

        if (c == '(')
        {

            if (ans < 0)
            {
                ans--;
                flag--;
            }
            else
            {
                ans++;
            }
        }
        else
        {
            if (flag < 0)
            {
                ans++;
                flag++;
            }
            else
            {
                ans--;
            }
        }
    }
    if (s.size() == 0)
    {
        cout << "0\n";
    }
    else
        cout << abs(ans) << "\n";
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
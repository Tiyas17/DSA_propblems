#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    ll n;
    bool flag = 1;
    cin >> n;
    map<ll, pair<ll, ll>> f;
    ll nn = 1;
    vector<ll> ans;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        // s.insert(a[i]);
    }

    ll i = 0;
    while (i < n)
    {
        if (f.find(a[i]) != f.end())
        {
            if (f[a[i]].second > 0)
            {
                ans.push_back(f[a[i]].first);
                f[a[i]].second--;
                if (f[a[i]].second == 0)
                    f.erase(a[i]);
            }
        }
        else
        {
            f[a[i]] = {nn, a[i] - 1};
            if (f[a[i]].second == 0)
                f.erase(a[i]);
            ans.push_back(nn);
            nn++;
        }
        i++;
    }

    for (auto i : f)
    {
        if (i.second.second > 0)
        {
            flag = 0;
            break;
        }
    }
    // cout << "ANS: ";
    if (!flag)
    {
        cout << "-1";
    }
    else
    {
        for (auto i : ans)
        {
            cout << i << " ";
        }
    }
    cout << endl;
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
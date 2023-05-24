#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    ll n;
    cin >> n;
    ll q;
    cin >> q;
    vector<ll> arr;

    for (ll i = 0; i < n; i++)
    {
        ll c;
        cin >> c;
        arr.push_back(c);
    }
    sort(arr.begin(), arr.end());
    // // prefix sum
    // for (ll i = 1; i < n; i++)
    // {
    //     arr[i] += arr[i - 1];
    // }
    while (q--)
    {
        int z;
        cin >> z;
        ll x;
        cin >> x;
        if (z == 1)
        {
            auto it = lower_bound(arr.begin(), arr.end(), x);
            if (it == arr.end())
            {
                cout << "-1 ";
            }
            else
                cout << *it << " ";
        }
        else if (z == 2)
        {
            auto it = upper_bound(arr.begin(), arr.end(), x);
            if (it == arr.end())
            {
                cout << "-1 ";
            }
            else
                cout << *it << " ";
        }
        else if (z == 3)
        {
            auto it = upper_bound(arr.begin(), arr.end(), x);
            cout << it - arr.begin() << " ";
        }
        else // if(z==1)
        {
            auto it = lower_bound(arr.begin(), arr.end(), x);
            cout << it - arr.begin() << " ";
        }
    }
    cout << "\n";
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
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{

    ll n;
    cin >> n;
    ll arr[n];
    map<ll, ll> freq;

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    ll k = freq.size(); // so k is the total number of distinct elements

    map<ll, ll> temp;

    ll ans = n;
    ll l = 0, h = 0;
    while (h < n)
    {
        while (temp.size() < k && h < n)
        {
            temp[arr[h]]++; // adding to the window
            h++;            // stretching
        }
        // you are here because temp.size()==k NOW
        while (temp.size() == k)
        {
            ans = min(h - l, ans);
            temp[arr[l]]--;
            if (temp[arr[l]] == 0)
                temp.erase(arr[l]);
            l++;
        }
    }
    // cout << "ANS: ";
    cout << ans << endl;
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
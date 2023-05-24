#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{

    ll n, m, q;
    cin >> n >> m >> q;
    ll arr[n];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    vector<ll> freq(n + 1, 0);
    while (m--) // IMPORTANT
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        freq[l]++;
        freq[r + 1]--;
    }

    vector<pair<ll, ll>> mp;
    vector<ll> sum(n);

    for (int i = 0; i < n; i++)
    {
        if (i != 0)
            freq[i] += freq[i - 1];
        mp.push_back({arr[i], freq[i]});
    }
    sort(mp.begin(), mp.end());
    sum[0] = mp[0].second;
    for (int i = 1; i < n; i++)
        sum[i] = sum[i - 1] + mp[i].second;
    while (q--)
    {
        ll k;
        cin >> k;
        if (lower_bound(sum.begin(), sum.end(), k) == sum.end())
            cout << -1 << " ";
        else
        {
            int ind = lower_bound(sum.begin(), sum.end(), k) - sum.begin();
            cout << mp[ind].first << " ";
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
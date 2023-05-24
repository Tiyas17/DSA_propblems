#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr;
    for (ll i = 0; i < n; i++)
    {
        ll j;
        cin >> j;
        arr.push_back(j);
    }
    vector<ll> counts(n, 0);
    ll sum = 0;
    for (ll i : arr)
    {
        // 3 1 2 7 4<-arr
        // 3 4 6 13 17<-PF
        // 3 4 1 3 2<-IMP
        //{0,1,1,2,1}<-count
        sum += (i % n + n) % n;
        counts[sum % n]++;
    }
    ll result = counts[0];
    for (ll c : counts)
    {
        result += (c * (c - 1)) / 2;
    }
    cout << result << "\n";
}
signed main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int _t;
    // cin >> _t;
    // while (_t--)
    solve();
}
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    ll n, target;
    cin >> n >> target;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    ll ans;
    ll best = arr[0] + arr[1] + arr[2];
    if (n == 3)
    {
        return abs(best - target);
    }
    for (ll i = 0; i < (ll)arr.size() - 1; i++)
    {
        ll lo = i + 1;
        ll hi = (ll)arr.size() - 1;

        while (lo < hi)
        {
            if (abs(arr[lo] + arr[i] + arr[hi] - target) < abs(best - target))
            {
                best = arr[lo] + arr[i] + arr[hi];
                ans = abs(best - target);
            }
            if (arr[lo] + arr[i] + arr[hi] > target)
                hi--;
            else if (arr[lo] + arr[i] + arr[hi] < target)
                lo++;
            else
                break; // best=target
        }
    }
    cout << ans << "\n";
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
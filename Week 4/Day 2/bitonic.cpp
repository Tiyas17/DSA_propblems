#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()
ll arr[100001];

void bs1(ll l, ll h, ll k)
{
    ll ans;
    while (l <= h)
    {
        ll mid = (l + h) / 2;
        if (arr[mid] == k)
        {
            cout << mid + 1 << " ";
            break;
        }
        else if (arr[mid] > k)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
}
void bs2(ll l, ll h, ll k)
{
    ll ans;
    while (l <= h)
    {
        ll mid = (l + h) / 2;
        if (arr[mid] == k)
        {
            cout << mid + 1 << " ";
            break;
        }
        else if (arr[mid] < k)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
}

bool check(ll mid)
{
    if (arr[mid] > arr[mid + 1])
    {
        return 1;
    }
    return 0;
}

void solve()
{
    ll n;
    cin >> n;
    ll q;
    cin >> q;

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll l = 0, h = n - 1;
    ll ans;
    while (l <= h)
    {
        ll mid = (l + h) / 2;
        if (check(mid) == 0)
        {
            l = mid + 1;
        }
        else
        {
            ans = mid;
            h = mid - 1;
        }
    }
    ll j = ans;
    // cout << j << "->PEAK\n";
    while (q--)
    {
        ll k;
        cin >> k;
        bs1(0, j, k);
        bs2(j + 1, n - 1, k);
        cout << "\n";
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
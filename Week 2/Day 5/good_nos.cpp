#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

const ll N = 1000005;
ll arr[N] = {0};
ll pfs[N];

void solve()
{
    ll n, k, q;
    // cout << "check";
    cin >> n >> k >> q;

    // cout << "check";
    // memset(arr, 0, sizeof(arr));

    for (ll i = 0; i < n; i++) // liked by child
    {
        ll l, r;
        cin >> l >> r;
        arr[l]++;
        arr[r + 1]--;
    }

    for (ll i = 1; i < N; i++)
    {
        arr[i] = arr[i - 1] + arr[i];
    }

    for (ll i = 1; i < N; i++)
    {
        if (arr[i] >= k)
            arr[i] = 1;
        else
            arr[i] = 0;
    }

    pfs[0] = 0;
    for (ll i = 1; i < N; i++)
    {
        pfs[i] = pfs[i - 1] + arr[i];
    }

    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        ll ans = pfs[r] - pfs[l - 1];
        // cout << "The ans is: ";
        cout << ans << endl;
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
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    ll n;
    cin >> n;
    ll arr[n], brr[n], ans = INT_MAX, i_max, i_min;
    ll i = 0;
    while (i < n)
    {
        ll k;
        cin >> k;
        arr[i] = k;
        i++;
    }
    i = 0;
    while (i < n)
    {
        ll k;
        cin >> k;
        brr[i] = k;
        i++;
    }

    do
    {
        i_max = max_element(arr, arr + n) - arr;
        if (brr[i_max] < arr[i_max])
        {
            swap(arr[i_max], brr[i_max]);
        }
        ll arr_min = *min_element(arr, arr + n);
        ll arr_max = *max_element(arr, arr + n);

        ans = min(ans, arr_max - arr_min);
        i_max = max_element(arr, arr + n) - arr;

    } while (brr[i_max] < arr[i_max]); // minimizing maximum

    do
    {
        i_min = min_element(arr, arr + n) - arr;
        if (brr[i_min] > arr[i_min])
        {
            swap(arr[i_min], brr[i_min]);
        }
        ll arr_min = *min_element(arr, arr + n);
        ll arr_max = *max_element(arr, arr + n);

        ans = min(ans, arr_max - arr_min);

        i_min = min_element(arr, arr + n) - arr;
    } while (brr[i_min] > arr[i_min]); // maximizing minimum

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
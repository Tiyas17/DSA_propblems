#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()
int freq[1000001] = {0};
ll fd(int k, int arr[], int n)
{
    ll tot = 0;
    // map<int, int> freq;
    int j = 0, i = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        // inserting in window
        if (!freq[arr[i]])
            cnt++;
        freq[arr[i]]++;

        if (cnt <= k)
        {
            tot += i - j + 1;
            // all number of subarrays having distinct elements (1,k)
        }
        else
        {
            while (cnt > k)
            {
                freq[arr[j]]--;
                if (freq[arr[j]] == 0)
                    cnt--;
                j++;
            }
            tot += i - j + 1;
        }
    }
    return tot;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    ll ans = fd(k, arr, n);
    for (int i = 0; i < n; i++)
        freq[arr[i]] = 0;
    ans -= fd(k - 1, arr, n);
    for (int i = 0; i < n; i++)
        freq[arr[i]] = 0;
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
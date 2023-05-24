/*
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    ll n, k;
    cin >> n;
    cin >> k;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll diff[n - 1];
    for (ll i = 0; i < n - 1; i++)
    {
        diff[i] = arr[i + 1] - arr[i];
    }

    // now diff stores all the differences of elements and
    // now all we need to get the maximum element in each subarray of window size n-k
    vector<ll> ans;
    deque<ll> q;
    for (ll i = 0; i < n - k - 1; i++)
    {
        if (q.empty())
            q.push_back(diff[i]);

        else
        {
            if (q.back() <= diff[i])
            {
                q.pop_back();
                q.push_back(diff[i]);
            }
            else
            {
                q.push_back(diff[i]);
            }
        }
    }

    // now our queue is of window size and the front element is the maximum
    // now slide the window

    ll l = 0, h = n - k - 1;
    // if(h==n-1)
    ll minDiff = 1e9;
    while (h <= n - 1)
    {
        minDiff = min(minDiff, q.front());
        if (q.front() == diff[l])
        {
            q.pop_front();
            l++;
        }
        else
        {
            l++;
        }
        // store the ans and move the low pointer

        // now store high
        if (q.empty())
            q.push_back(diff[h]);
        else
        {
            if (q.back() <= diff[h])
            {
                q.pop_back();
                q.push_back(diff[h]);
            }
            else
            {
                q.push_back(diff[h]);
            }
        }
        h++;
    }

    cout << minDiff << endl;
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
*/
#include <bits/stdc++.h>
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        int diff[n - 1];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 1; i < n; i++)
            diff[i - 1] = arr[i] - arr[i - 1];
        int ans = 2e9;
        int window = n - k - 1;
        deque<int> q;
        for (int i = 0; i < n - 1; i++)
        {
            while (!q.empty() and i - q.front() + 1 > window)
                q.pop_front();
            while (!q.empty() and diff[i] >= diff[q.back()])
                q.pop_back();
            q.push_back(i);
            if (i >= window - 1)
                ans = min(ans, diff[q.front()]);
        }
        cout << ans << "\n";
    }
}
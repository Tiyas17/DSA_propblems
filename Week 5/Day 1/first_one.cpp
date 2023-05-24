#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

int solve()
{
    // int arr[10] = {0, 0, 0, 0, 0, 1, 1, 1, 1, 1};
    int arr[8] = {2, 5, 7, 8, 9, 11, 11, 13};
    int x = 9;
    int ans = -1;
    int l = 0, h = 9;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (arr[mid] < x)
        {
            l = mid + 1;
        }
        else // if (arr[mid] == 1)
        {
            ans = mid;
            h = mid - 1;
        }
    }
    return ans;
}
signed main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int _t;cin>>_t;while(_t--)
    cout << solve();
}
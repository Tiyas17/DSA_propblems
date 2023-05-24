#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll c = 2;
        ll ans = 2;
        ll dif = a[1] - a[0];
        for (ll i = 1; i < n - 1; i++)
        {
            if ((a[i + 1] - a[i]) == dif)
            {
                c++;
            }
            else
            {
                dif = a[i + 1] - a[i];
                c = 2;
            }
            ans = max(ans, c);
        }
        cout << ans << "\n";
    }
}
// signed main()
// {

//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int _t;
//     cin >> _t;
//     while (_t--)
//         solve();
// }
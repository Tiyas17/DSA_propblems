#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

// The next possible permutation of the array can be found using next_permutation()
// function provided in STL. It returns 0 when there is no next permutation.

// Time Complexity per test case: O(NXN!)
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a;
    for (ll i = 1; i <= n; i++)
    {

        a.push_back(i);
    }
    do
    {
        for (ll i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    } while (next_permutation(a.begin(), a.end()));
}
signed main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int _t;cin>>_t;while(_t--)
    solve();
}
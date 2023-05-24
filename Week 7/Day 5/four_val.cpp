#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    map<ll, ll> m;
    ll n, x;
    cin >> n >> x;

    ll A[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    m[A[0] + A[1]]++;
    int flag = 0;
    for (ll i = 2; i < n; i++) // since 1<=n<=1000 O(n2) will pass
    {
        for (ll j = i + 1; j < n; j++)
        {
            if (m.find(x - A[i] - A[j]) != m.end())
            {
                cout << "YES" << endl;
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            break;
        }
        for (ll j = 0; j < i; j++)
        {
            m[A[j] + A[i]]++;
        }
    }
    if (!flag)
        cout << "NO\n";
}
signed main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int _t;cin>>_t;while(_t--)
    solve();
}
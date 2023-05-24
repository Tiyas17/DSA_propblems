#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    int a;
    cin >> a;
    vector<int> v;
    while (a)
    {
        v.push_back(a & 1);
        a = a >> 1;
    }
    reverse(v.begin(), v.end());
    for (auto i : v)
    {
        cout << i;
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
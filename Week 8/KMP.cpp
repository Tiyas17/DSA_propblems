#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

vector<int> kmp(string s)
{
    int n = s.length();
    vector<int> res(n + 1);
    int i = 0, j = -1;
    res[0] = -1;
    while (i < n)
    {
        while (j != -1 && s[i] != s[j])
        {
            j = res[j];
        }
        i++;
        j++;
        res[i] = j;
    }
    return res;
}

void solve()
{
}
signed main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int _t;cin>>_t;while(_t--)
    solve();
}
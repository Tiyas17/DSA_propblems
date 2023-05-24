#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

int n;
map<int, int> mp;
int cnt = 0;
vector<int> curr_per;
vector<vector<int>> all_sol;

void rec(int level)
{
    if (level == n)
    {
        all_sol.push_back(curr_per);
        cnt++;
        return;
    }

    for (auto v : mp)
    {
        if (v.second != 0) // not zero
        {
            curr_per.push_back(v.first);
            mp[v.first]--;
            rec(level + 1);
            curr_per.pop_back();
            mp[v.first]++;
        }
    }
}

void solve()
{
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    rec(0);
    cout << "The ans is:" << cnt << endl;
    for (int i = 0; i < all_sol.size(); i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << all_sol[i][j] << " ";
        }
        cout << endl;
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
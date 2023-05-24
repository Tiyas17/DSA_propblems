#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

int n;
int k;
map<int, int> mp;
int cnt = 0;
vector<int> curr_per;
vector<vector<int>> all_sol;
int flag = 0;

void rec(int level)
{
    if (level == n)
    {
        if (cnt == k)
        {
            flag = 1;
        }

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
            if (flag)
            {
                return;
            }
            curr_per.pop_back();
            mp[v.first]++;
        }
    }
}

void solve()
{

    cin >> n;
    cin >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }
    for (int i = 0; i < 13; i++)
    {
        mp[arr[i]]++;
    }
    rec(0);
    if (n > 13)
    {
        vector<int> a;
        a = all_sol[k - 1];
        for (int i = 14; i < n; i++)
        {
            a.push_back(i);
        }
        all_sol[k - 1] = a;
    }
    for (int i = 0; i < n; i++)
    {
        cout << all_sol[k - 1][i] << " ";
    }

    cout << endl;
}
signed main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int _t;cin>>_t;while(_t--)
    solve();
}
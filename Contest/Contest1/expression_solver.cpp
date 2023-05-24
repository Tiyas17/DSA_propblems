#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

vector<string> split(string &s, char delim)
{
    vector<string> elems;
    stringstream ss(s);
    string item;
    while (getline(ss, item, delim))
    {
        if (item.length() > 0)
        {
            elems.push_back(item);
        }
    }
    return elems;
}

void solve()
{
    string s;
    cin >> s;
    vector<string> temp = split(s, '=');
    // for (auto c : temp)
    // {
    //     // cout << c << " ";
    // }
    vector<string> parts;
    for (auto v : temp)
    {
        if (v[0] == '-')
        {
            v = "0" + v;
        }
        v = v + "+0";
        string final = "";
        for (auto ch : v)
        {
            if (ch == '-')
        }
    }
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
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    // bbaabbaaabbabababbbbaaabbbbaaaaaabbabaababaaaabaabbaababababbbababbaaabbaaaaaabaaaabaaabbabaaabaaa
    string s;
    cin >> s;
    int a_s = 0, b_s = 0;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] != s[i - 1])
        {
            if (s[i - 1] == 'a')
            {
                a_s++;
                if (i == s.size() - 1)
                {
                    a_s++;
                }
            }
            else
            {
                b_s++;
                if (i == s.size() - 1)
                {
                    a_s++;
                }
            }
        }
    }
    cout << min(a_s, b_s) + 1 << endl;
}
signed main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int _t;cin>>_t;while(_t--)
    solve();
}
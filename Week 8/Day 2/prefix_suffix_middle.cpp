#include <bits/stdc++.h>
using namespace std;

#define int long long

int pi[100005];

void prefix(string s)
{
    int n = s.size();
    pi[0] = 0;
    for (int i = 1; i < n; ++i)
    {
        int j = pi[i - 1];
        while (j > 0 && s[i] != s[j])
        {
            j = pi[j - 1];
        }
        if (s[i] == s[j])
        {
            j++;
        }
        pi[i] = j;
    }
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        prefix(s);
        if (pi[n - 1] == 0)
        {
            cout << "-1\n";
            continue;
        }
        bool f = 0;
        for (int i = n - 2; i >= 1; --i)
        {
            if (pi[i] == pi[n - 1])
            {
                cout << s.substr(0, pi[n - 1]) << "\n";
                f = 1;
                break;
            }
        }
        if (f)
            continue;
        if (pi[pi[n - 1] - 1] == 0)
        {
            // cout << "noMid ";
            cout << "-1\n";
        }
        else
        {
            // cout << "satisfied";
            cout << s.substr(0, pi[pi[n - 1] - 1]) << "\n";
        }
    }
    return 0;
}
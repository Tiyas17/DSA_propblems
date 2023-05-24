#include <bits/stdc++.h>
using namespace std;
#define int long long

int abc = 1;
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

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cout << "Test case #" << abc++ << "\n";
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> kmp_arr = kmp(s);

        for (int i = 1; i < n; ++i)
        {
            if ((i + 1) % (i + 1 - kmp_arr[i + 1]) == 0 && (i + 1) / (i + 1 - kmp_arr[i + 1]) > 1)
            {
                cout << i + 1 << " " << (i + 1) / (i + 1 - kmp_arr[i + 1]) << "\n";
            }
        }
    }
    return 0;
}

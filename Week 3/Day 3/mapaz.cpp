#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int main()
{
    IOS int t;
    cin >> t;
    while (t--)
    {
        int q;
        cin >> q;
        map<string, int> m;
        while (q--)
        {
            string s;
            cin >> s;
            if (s == "add")
            {
                string c;
                cin >> c;
                int k;
                cin >> k;
                m[c] = k;
            }
            else if (s == "erase")
            {
                string x;
                cin >> x;
                if (m.find(x) != m.end())
                {
                    m.erase(x);
                }
            }
            else if (s == "print")
            {
                string x;
                cin >> x;
                if (m.find(x) != m.end())
                {
                    cout << m[x] << "\n";
                }
                else
                {
                    cout << "0\n";
                }
            }
        }
    }
    return 0;
}
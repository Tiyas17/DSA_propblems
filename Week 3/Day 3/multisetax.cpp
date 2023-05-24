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
        multiset<int> m;
        while (q--)
        {
            string s;
            cin >> s;
            if (s == "add")
            {
                int k;
                cin >> k;
                m.insert(k);
            }
            else if (s == "erase")
            {
                int x;
                cin >> x;
                if (m.find(x) != m.end())
                {
                    m.erase(m.find(x));
                }
            }
            else if (s == "eraseall")
            {
                int x;
                cin >> x;
                if (m.find(x) != m.end())
                {
                    m.erase(x);
                }
            }
            else if (s == "find")
            {
                int x;
                cin >> x;
                if (m.find(x) != m.end())
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
            else if (s == "count")
            {
                int x;
                cin >> x;
                cout << m.count(x) << "\n";
            }
            else if (s == "print")
            {
                for (int i : m)
                {
                    cout << i << " ";
                }
                cout << "\n";
            }
            else
            {
                m.clear();
            }
        }
    }
    return 0;
}
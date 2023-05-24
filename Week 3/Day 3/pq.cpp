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
        priority_queue<int> m;
        while (q--)
        {
            string s;
            cin >> s;
            if (s == "add")
            {
                int k;
                cin >> k;
                m.push(k);
            }
            else if (s == "remove")
            {
                if (!m.empty())
                {
                    m.pop();
                }
            }
            else if (s == "print")
            {
                if (!m.empty())
                {
                    cout << m.top() << "\n";
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
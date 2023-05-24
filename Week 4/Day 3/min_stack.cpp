#include <bits/stdc++.h>
using namespace std;

class MinStack
{
private:
public:
    stack<int> st, t;
    MinStack() {}

    void push(int x)
    {
        if (!st.empty())
        {
            st.push(x);
            t.push(min(t.top(), x));
        }
        else
        {
            st.push(x);
            t.push(x);
        }
    }

    void pop()
    {
        if (!st.empty())
        {
            st.pop();
            t.pop();
        }
    }

    int top()
    {
        if (!st.empty())
            return st.top();
        else
        {
            return -1;
        }
    }

    int getMin()
    {
        if (!t.empty())
            return t.top();
        else
        {
            return -1;
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int q;
    cin >> q;

    MinStack s;

    while (q--)
    {
        string op;
        cin >> op;

        if (op == "push")
        {
            int x;
            cin >> x;
            s.push(x);
        }
        else if (op == "pop")
        {
            s.pop();
        }
        else if (op == "top")
        {
            cout << s.top() << "\n";
        }
        else if (op == "getMin")
        {
            cout << s.getMin() << "\n";
        }
    }

    return 0;
}
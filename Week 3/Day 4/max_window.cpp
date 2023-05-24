#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
int mod = 1e9 + 7;

void add(deque<int> &d, int x)
{
    while (!d.empty() && d.back() < x) // if the left element is left than x, it should be removed as its not useful
        d.pop_back();
    d.push_back(x);
    return;
}

void rem(deque<int> &d, int x)
{
    assert(!d.empty());
    if (d.front() == x)
        d.pop_front();
    return;
}

signed main()
{
    // freopen("IN", "r", stdin);
    // freopen("OUT", "w", stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        int A[n];

        for (int i = 0; i < n; i++)
            cin >> A[i];

        deque<int> d;

        for (int i = 0; i < k; i++) // creating window of size k
            add(d, A[i]);
        // ans->slide{remove and insert}
        for (int i = 0; i <= n - k; i++)
        {
            cout << d.front() << " ";
            rem(d, A[i]); // removing from the window slide
            if (i + k < n)
                add(d, A[i + k]);
        }

        cout << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

const int N = 100;

ll ans = 0;
bool isPrime[N];
bool marked[N];
vector<int> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

void solve(int m, int n, int prev, int par)
{
    // level
    if (!m) // execute when m=0
    {
        if (isPrime[prev + 1])
        {
            ans++;
        }
        return;
    }

    for (int i = 1 + par; i <= n; i += 2) // choice
    {
        if (!marked[i] && isPrime[i + prev]) // check
        {
            marked[i] = true; // move
            solve(m - 1, n, i, 1 - par);
            marked[i] = false;
        }
    }
    return;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    if (n % 2 == 1) // if n is odd first and last would be of same parity
    {
        cout << "0\n";
        return 0;
    }

    memset(isPrime, false, sizeof(isPrime));
    memset(marked, false, sizeof(marked));

    for (int u : prime)
    {
        isPrime[u] = true;
    }

    marked[1] = true;
    solve(n - 1, n, 1, 1);

    cout << ans << "\n";
}
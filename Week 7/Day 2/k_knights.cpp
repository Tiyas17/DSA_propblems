#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

int n, k;
int ans;
int board[14][14];
int dx[] = {1, 2, 2, 1, -1, -2, -2, -2};
int dy[] = {2, 1, -1, -2, -2, -1, 1, 2};

bool check(int i, int j)
{
    if (board[i][j] == 1)
        return false;

    for (int pos = 0; pos < 8; pos++) // checking for all the attacking pos
    {
        int nx = i + dx[pos];
        int ny = j + dy[pos];
        // nx and ny are getting attacked
        if (nx < n && nx > 0 && ny < n && ny > 0 && board[nx][ny] == 1)
            return 0;
    }
    return 1;
}

void rec(int level)
{ // level = number of knights placed
    if (level == k)
    {
        ans++;
        return;
    }
    // choice
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // check
            if (check(i, j))
            {
                // move
                board[i][j] = 1;
                rec(level + 1);
                board[i][j] = 0;
            }
        }
    }
}

void solve()
{
    cin >> n >> k;
    memset(board, 0, sizeof(board)); // sets all the element to be -1//NOTE ONLY 0/-1 works for memset
    ans = 0;
    rec(0);
    for (int i = 1; i <= k; i++)
    {
        ans = ans / i;
    }
    cout << ans << endl;
}
signed main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int _t;cin>>_t;while(_t--)

    solve();
}
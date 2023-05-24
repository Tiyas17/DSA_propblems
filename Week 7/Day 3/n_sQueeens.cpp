#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

int n;
vector<int> queens;
int ans = 0;

bool check(int level, int col)
{

    // Queen's Condition
    for (int prow = 0; prow < level; prow++)
    {
        int pcol = queens[prow];
        if (pcol == col || abs(prow - level) == abs(pcol - col))
            return false;
    }

    // Knight's Condition
    int a, b;
    a = level - 2;
    b = col - 1;

    if (a >= 0 && a < n && b >= 0 && b < n) // inside board
    {
        if (queens[a] == b) // if in that row the s queen is at bth column
        {
            return false;
        }
    }

    a = level - 2;
    b = col + 1;

    if (a >= 0 && a < n && b >= 0 && b < n) // inside board
    {
        if (queens[a] == b) // if in that row the s queen is at bth column
        {
            return false;
        }
    }

    a = level - 1;
    b = col + 2;

    if (a >= 0 && a < n && b >= 0 && b < n) // inside board
    {
        if (queens[a] == b) // if in that row the s queen is at bth column
        {
            return false;
        }
    }

    a = level - 1;
    b = col - 2;

    if (a >= 0 && a < n && b >= 0 && b < n) // inside board
    {
        if (queens[a] == b) // if in that row the s queen is at bth column
        {
            return false;
        }
    }

    return true;
}

// void printboard()
// {
//     for (int r = 0; r < n; r++)
//     {
//         for (int c = 0; c < n; c++)
//         {
//             if (queens[r] == c)
//             {
//                 cout << " Q ";
//             }
//             else
//             {
//                 cout << " . ";
//             }
//         }
//         cout << endl;
//     }
// }
// 5 4 3 -7 2 11 -6 5 -12
// 5 9 12 5 7 18 12 17 5
void solve(int level)
{
    if (level == n) // going out of board
    {
        ans++;
        // printboard();
        // cout << endl;
        return;
    }
    // choice
    for (int col = 0; col < n; col++)
    {
        // check the choice
        if (check(level, col))
        {
            // place the queen
            queens[level] = col;

            // move to the next level
            solve(level + 1);

            queens[level] = -1;
        }
    }
}
signed main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    queens.resize(n, -1);
    // int _t;cin>>_t;while(_t--)

    solve(0); // can be considered as the first check

    cout << ans << "\n";
}
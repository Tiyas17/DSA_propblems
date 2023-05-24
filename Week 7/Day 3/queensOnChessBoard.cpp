#include <bits/stdc++.h>
#define lli long long int
#define li long int
#define ld long double
using namespace std;
const lli mod = 1e9 + 7;
int ans = 0;
bool takencols[8], takendiag1[16], takendiag2[16]; // initially all are false

// r->level

void place(string board[8], int r, int &ans)
{
    if (r == 8) // out of board
    {
        ans++;
        return;
    }
    for (int c = 0; c < 8; c++) // choice
    {
        if (board[r][c] == '.') // check
        {
            if (!takencols[c] && !takendiag1[r - c + 8 - 1] && !takendiag2[r + c]) // check
            {
                takencols[c] = takendiag1[r - c + 8 - 1] = takendiag2[r + c] = true;
                // move
                place(board, r + 1, ans);
                takencols[c] = takendiag1[r - c + 8 - 1] = takendiag2[r + c] = false;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    string board[8];
    for (int i = 0; i < 8; i++)
    {
        cin >> board[i];
    }
    place(board, 0, ans);
    cout << ans;
    return 0;
}
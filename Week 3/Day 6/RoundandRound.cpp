#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

vector<int> moves[4] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
//                        N        E       S        W
// SUPPOSE STANDING FACING SOUTH U MOVE RIGHT NOW YOU WOULD FACE WEST WHICH IS CURRENT DIRECTION + 1 WHILE IF LEFT U WOULD FACE EAST AND DIRECTION IS CURRENT DIRECTION + 3 BUT SEE THE PERIODICITY THAT IS WHY MODULO IS USED

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int x = 0, y = 0, dir = 0;

    for (char i : s)
    {
        if (i == 'L')
        {
            dir = (dir + 3) % 4;
        }
        else if (i == 'R')
        {
            dir = (dir + 1) % 4;
        }
        else
        {
            x += moves[dir][0];
            y += moves[dir][1];
        }
    }
    if (x == 0 && y == 0)
        cout << "YES\n";
    else if (dir != 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}
signed main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int _t;
    cin >> _t;
    while (_t--)
        solve();
}
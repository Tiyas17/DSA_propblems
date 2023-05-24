#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
int mod = 1e9 + 7;

string ans = "";

void dfs(int curLen, int totalLen, int openCnt)
{
    if (curLen == totalLen)
    {
        assert(openCnt == 1); // for odd n
        ans += ")";
        cout << ans << "\n";
        ans.pop_back();
        return;
    }

    if (!openCnt) // when no opening braces
    {
        ans += "(";
        dfs(curLen + 1, totalLen, openCnt + 1);
        ans.pop_back();
    }

    else
    {
        int remLen = totalLen - curLen + 1;
        if (remLen > openCnt)
        {
            ans += "(";
            dfs(curLen + 1, totalLen, openCnt + 1);
            ans.pop_back();
            ans += ")";
            dfs(curLen + 1, totalLen, openCnt - 1);
            ans.pop_back();
        }
        // not lexi
        //  if (remLen > openCnt)
        //  {
        //      ans += ")";
        //      dfs(curLen + 1, totalLen, openCnt + 1);
        //      ans.pop_back();
        //      ans += "(";
        //      dfs(curLen + 1, totalLen, openCnt - 1);
        //      ans.pop_back();
        //  }
        else
        {
            ans += ")";
            dfs(curLen + 1, totalLen, openCnt - 1);
            ans.pop_back();
        }
    }
}

signed main()
{
    // freopen("IN", "r", stdin);
    // freopen("OUT", "w", stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    dfs(1, n, 0);

    return 0;
}
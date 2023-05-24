#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    int n;
    cin >> n;

    string temp;
    getline(cin, temp);

    // Note we cann't use cin and getline together one after other instead to need a dummy getline i.e. temp here
    string arr[n];
    for (int i = 0; i < n; i++)
        getline(cin, arr[i]);

    for (int i = n - 1; i >= 0; i--)
    {
        cout << "Hi " << arr[i] << " !" << endl;
    }
}
signed main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int _t;cin>>_t;while(_t--)
    solve();
}
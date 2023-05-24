#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

class ProductOfKNumbers
{

public:
    vector<ll> p;
    int inv(int x)
    {
        int ans = 1;
        int p = mod - 2;

        while (p)
        {
            if (p & 1)
                ans = 1LL * ans * x % mod;
            x = 1LL * x * x % mod;
            p /= 2;
        }

        return ans;
    }
    ProductOfKNumbers()
    {
    }

    void add(int num)
    {
        if (p.empty() && num != 0) // when the vector is empty and num is non zero
            p.push_back(num);
        else
        {
            if (num == 0)
            {
                p.clear();
            }
            else
            {
                ll k = (1ll * num * p.back()) % mod;
                p.push_back(k);
            }
        }
    }

    int getProduct(int k)
    {

        int j = (int)p.size() - k;

        if (j < 0)
            return 0;

        int ans = p.back();

        if (j)
            ans = 1LL * ans * inv(p[j - 1]) % mod;

        return ans;
    }
};

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    int Q;
    cin >> Q;

    ProductOfKNumbers productOfKNumbers;

    while (Q--)
    {
        string op;
        cin >> op;

        if (op == "add")
        {
            int num;
            cin >> num;
            productOfKNumbers.add(num);
        }
        else
        {
            int k;
            cin >> k;

            cout << productOfKNumbers.getProduct(k) << "\n";
        }
    }

    return 0;
}
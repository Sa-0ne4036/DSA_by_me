// do it before time ends

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> array(n);

        for (ll i = 0; i < n; ++i)
        {
            cin >> array[i];
        }

        vector<ll> res(n);
        for (ll i = 0; i < n; ++i)
        {
            res[i] = (array[i] % n) + 1;
        }

        for (const auto &val : res)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}

// do it before time ends

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n; cin >> n;
        ll sum = 0;

        vector<ll> val(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> val[i];
            sum += val[i];
        }

        ll ans = 0; ll i = 0; ll j = n - 1;

        string direc;
        cin >> direc;

        while (j > i)
        {
            while (direc[i] == 'R')
            {
                sum -= val[i];
                i++;
            }
            while (direc[j] == 'L')
            {
                sum -= val[j];
                j--;
            }
            if (j < i)
            {
                break;
            }
            ans += sum; 
            sum -= val[i]; i++;
            sum -= val[j]; j--;
        }
        cout << ans << endl;
    }
    return 0;
}

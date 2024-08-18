// do it before its time ends

#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll MOD = 1e9 + 7;

ll pw(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll t = pw(a, b / 2);
    if (b % 2 == 0)
        return 1ll * t * t % MOD;
    else
        return 1ll * t * t * a % MOD;
}
void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long largestodd = 0; 
    long long largesteven = 0; 
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1 && a[i] > largestodd)
            largestodd = a[i];
        if (a[i] % 2 == 0 && a[i] > largesteven)
            largesteven = a[i];
    }

    int c = 0;
    bool parity = true;
    for (int i = 1; i < n; i++)
    {
        if (a[i] % 2 != a[0] % 2)
        {
            parity = false;
            break;
        }
    }

    if (parity)
    {
        cout << 0 << endl;
        return;
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0 && a[i] < largestodd)
        {
            c++;
            a[i] = a[i] + largestodd;
            largestodd = max(largestodd, a[i]);
        }
    }

    parity = true;
    for (int i = 1; i < n; i++)
    {
        if (a[i] % 2 != a[0] % 2)
        {
            parity = false;
            break;
        }
    }

    if (parity)
    {
        cout << c << endl;
        return;
    }

    ll indx = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1 && a[i] == largestodd)
        {
            indx = i;
            break;
        }
    }

    a[indx] = largestodd + largesteven;
    c++;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            c++;
        }
    }

    cout << c << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
// lets do it before time ends

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        for (int i = 0; i < 2; i++)
        {
            int digit = n % 10;
            ans = ans + digit;
            n = n / 10;
        }
        cout << ans << endl;
    }

    return 0;
}
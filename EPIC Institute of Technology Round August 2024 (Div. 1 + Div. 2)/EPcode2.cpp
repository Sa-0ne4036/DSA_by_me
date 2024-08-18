// do it before time ends

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        long long arrA[n];
        long long arrB[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arrA[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arrB[i];
        }

        long long Alice = true;
        long long Bob = true;
        for (int i = 0; i < n; i++)
        {
            if (arrA[i] != arrB[i])
                Alice = false;
        }

        if (Alice)
        {
            cout << "Bob" << endl;
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            if (arrA[i] != arrB[n - i - 1])
            {
                Bob = false;
            }
        }

        if (Bob)
        {
            cout << "Bob" << endl;
            continue;
        }
        cout << "Alice" << endl;
    }
    return 0;
}

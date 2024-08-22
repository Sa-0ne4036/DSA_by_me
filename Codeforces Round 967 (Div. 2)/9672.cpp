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

        if (n % 2 == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            int i = 1;
            int j = n;

            while (i < j)
            {
                cout << i << " " << j << " ";
                i++;
                j--;
            }
            if (i == j)
            {
                cout << i;
            }
            cout << endl;
        }
    }
    return 0;
}


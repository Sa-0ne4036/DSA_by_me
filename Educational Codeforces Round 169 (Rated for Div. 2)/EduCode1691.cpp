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
        vector<int> points(n);
        for (int i = 0; i < n; i++)
        {
            cin >> points[i];
        }

        bool possible = false;

        if (n >= 3)
        {
            possible = false;
        }
        else
        {
            if (abs(points[0] - points[1]) == 1)
            {
                possible = false;
            }
            else
            {
                possible = true;
            }
        }

        if (possible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // insert the testcases
    int n;
    cin >> n;

    // initialize the count
    int count = 0;

    // find the sum of 3
    for (int i = 0; i < n; i++)
    {
        int p, v, t;
        cin >> p >> v >> t;

        if (p + v + t >= 2)
        {
            count++;
        }
    }

    // output the result
    cout << count << endl;
    return 0;
}
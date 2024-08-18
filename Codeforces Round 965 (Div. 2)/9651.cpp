#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int xc, yc, k;
        cin >> xc >> yc >> k;

        vector<pair<int, int>> points;

        if (k % 2 == 1)
        {
            points.push_back({xc, yc});
        }

        for (int i = 1; i <= k / 2; ++i)
        {
            points.push_back({xc - i, yc - i});
        }

        for (int i = 1; i <= k / 2; ++i)
        {
            points.push_back({xc + i, yc + i});
        }

        for (const auto &point : points)
        {
            cout << point.first << " " << point.second << endl;
        }
    }

    return 0;
}

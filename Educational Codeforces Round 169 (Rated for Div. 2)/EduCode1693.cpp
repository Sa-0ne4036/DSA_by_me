// do it before time ends

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> cost(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> cost[i];
        }
        int oddin = 0;
        int evenin = 0;
        sort(cost.begin(), cost.end(), greater<int>());

        for (int i = 0; i < n; i++)
        {
            if (k == 0)
            {
                break;
            }
            if (i == n - 1)
            {
                break;
            }
            int diff = cost[i] - cost[i + 1];
            int rate = min(diff, k);
            cost[i + 1] += rate;
            k -= rate;
            i++;
        }
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                evenin += cost[i];
            }
            else
            {
                oddin += cost[i];
            }
        }
        cout << abs(oddin - evenin) << endl;
    }
    return 0;
}

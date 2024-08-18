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
        string a, b;
        cin >> a >> b;
        int free_cell = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '.' || b[i] == '.')
            {
                free_cell = 1;
            }
        }
        if (free_cell == 0)
        {
            cout << 0 << endl;
            continue;
        }
        int possible_cell = 0;
        vector<int> count(n + 2, 0);

        int current = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '.')
            {
                current++;
            }
            if (b[i] == '.')
            {
                current++;
            }
            count[i] = current;
        }
        for (int i = 1; i < n - 1; i++)
        {
            int left = count[i - 1];
            int right = count[n - 1] - left - 2;
            if (a[i] == '.' && b[i - 1] == 'x' && b[i + 1] == 'x' && left > 0 && right > 0 && b[i] == '.')
            {
                possible_cell++;
            }
            if (b[i] == '.' && a[i - 1] == 'x' && a[i + 1] == 'x' && left > 0 && right > 0 && a[i] == '.')
            {
                possible_cell++;
            }
        }
        cout << possible_cell << endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        unordered_map<int, int> mapnum;

        int high_count = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
            mapnum[nums[i]]++;

            if (mapnum[nums[i]] > high_count)
            {
                high_count = mapnum[nums[i]];
            }
        }
        int ope = n - high_count;
        cout << ope << endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int play_game(vector<int> &arr)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int start = 0, end = n - 1;

    while (start < end)
    {
        start++;

        if (start >= end)
        {
            break;
        }
        end--;
    }
    return arr[start];
}

int main()
{
    int t; 
    cin >> t;

    while (t--)
    {
        int n; 
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        cout << play_game(arr) << endl;
    }

    return 0;
}

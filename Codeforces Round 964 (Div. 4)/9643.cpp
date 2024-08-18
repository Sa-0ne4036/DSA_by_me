// do it before time ends

#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int n, s, m;
    cin >> n >> s >> m;
    vector<pair<int, int>> v;
    for (int i = 1; i <= n; i++)
    {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        v.push_back({temp1, temp2});
    }
    sort(v.begin(), v.end());
    int innit = v[0].first;
    if (innit >= s)
    {
        cout << "YES" << endl;
        return;
    }
    int last = v[0].second;
    for (int i = 1; i < n; i++)
    {
        if (v[i].first > last)
        {
            if (v[i].first - last >= s)
            {
                cout << "YES" << endl;
                return;
            }
        }
        last = max(last, v[i].second);
    }
    if (m - last >= s)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
};


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}
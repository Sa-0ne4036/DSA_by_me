// do it before time ends

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int colorNUM = min(n, k) * min(m, k);
        cout << colorNUM << endl;
    }
    return 0;
}
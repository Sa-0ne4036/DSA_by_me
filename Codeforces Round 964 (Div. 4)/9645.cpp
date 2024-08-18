// do it before time ends

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;

        int pick = log2(l) / log2(3);
        pick++;
        int ans = 0;
        ans += (2 * pick);

        while (r > l)
        {
            int k = log2(r) / log2(3);
            int q = pow(3, k);
            int count = r - max(q, l + 1);
            ans += ((k + 1) * (count + 1));
            r = q - 1;
        }

        cout << ans << endl;
    }
}
// DO it before time ends

#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 10;

int n, q;
int a[maxn], c[maxn], f[maxn];
void add(int i, int x)
{
    for (; i <= n; i += i & (-i))
        c[i] += x;
}
int sum(int i)
{
    int res = 0;
    for (; i; i -= i & (-i))
        res += c[i];
    return res;
}

signed main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    cin >> n >> q;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 1, l, r, mid, res; i <= n; ++i)
    {
        l = 1, r = n, res = 0;
        while (l <= r)
        {
            mid = l + r >> 1;
            if (sum(mid) / mid >= a[i])
                l = mid + 1, res = mid;
            else
                r = mid - 1;
        }
        f[i] = res;
        add(res + 1, 1);
    }
    int u, v;
    while (q--)
    {
        cin >> u >> v;
        cout << (f[u] < v ? "YES\n" : "NO\n");
    }
}
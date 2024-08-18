#include <bits/stdc++.h>
using namespace std;

#define FOR(x, y, z) for (int x = y; x < (z); x++)
#define all(x) x.begin(), x.end()
const int N = 1000 + 5, K = 100 + 5, INF = 1e9;

int dp[K][K][K];
int dp2[N][K];
int init;

void solve()
{
    int n, k;
    cin >> n >> k;

    init = dp[40][70][70];
    FOR(i, 0, n + 5)
    {
        FOR(j, 0, k + 5)
        {
            dp2[i][j] = init;
        }
    }

    dp2[0][0] = 0;
    FOR(t, 1, n + 1)
    {
        int x, y;
        cin >> x >> y;
        FOR(e, 0, k + 2)
        {
            FOR(c, 0, e + 1)
            {
                dp2[t][e] = min(dp2[t][e], dp2[t - 1][e - c] + dp[x][y][c]);
            }
        }
    }

    int ans = min(dp2[n][k], dp2[n][k + 1]);
    cout << (ans == init ? -1 : ans) << "\n";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    FOR(i, 0, K)
    FOR(j, 0, K)
    FOR(op, 0, K)
    dp[i][j][op] = (op == 0 ? 0 : INF);

    FOR(s1, 1, K)
    {
        FOR(s2, 1, K)
        {
            FOR(op, 0, K)
            {
                int get1 = 1 + (s2 == 1 ? s1 : 0);
                int get2 = 1 + (s1 == 1 ? s2 : 0);
                if (op >= get1)
                    dp[s1][s2][op] = min(dp[s1][s2][op], dp[s1][s2 - 1][op - get1] + s1);
                if (op >= get2)
                    dp[s1][s2][op] = min(dp[s1][s2][op], dp[s1 - 1][s2][op - get2] + s2);
            }
        }
    }

    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}

//F works in 50ms
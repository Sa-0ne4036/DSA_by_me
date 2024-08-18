#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <map>
#include <deque>

using namespace std;

using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n), b(n);
        deque<pair<ll, ll>> v;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
        }

        for (int i = 0; i < n; i++)
        {
            ll cur = b[i];
            ll cnt = a[i];
            ll cur_max = 0;
            bool flag = false;
            while (!v.empty())
            {
                if (v.back().second == cur)
                {
                    flag = true;
                    cnt = max(0ll, v.back().first - cur_max) + max(0ll, cnt - cur_max) + cur_max;
                    a[i] = cnt;
                    i--;
                    v.pop_back();
                    break;
                }
                else if (v.back().first <= cnt)
                {
                    cur_max = v.back().first;
                    v.pop_back();
                }
                else
                {
                    break;
                }
            }

            if (!flag)
            {
                v.push_back({cnt, cur});
                cout << v[0].first << ' ';
            }
        }
        cout << endl;
    }
}

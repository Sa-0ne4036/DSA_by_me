// do it before time ends

#include <bits/stdc++.h>
using namespace std;

int score(int a, int b, int c, int d)
{
    int f = 0;
    int s = 0;
    if (a > b){f++;}
    else if (a == b){}
    else{s++;}
    if (c > d){f++;}
    else if (c == d){}
    else{s++;}
    return f > s;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        int ans = 0;
        ans = ans + score(a1, b1, a2, b2);
        ans = ans + score(a1, b2, a2, b1);
        ans = ans + score(a2, b1, a1, b2);
        ans = ans + score(a2, b2, a1, b1);
        cout << ans << endl;
    }
    return 0;
}

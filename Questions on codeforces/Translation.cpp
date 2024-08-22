#include <bits/stdc++.h>
using namespace std;

int main()
{
    // intialize and enter strings
    string s, t;
    cin >> s >> t;

    // reverse the second string
    reverse(t.begin(), t.end());

    // compare and outpur result
    if (s == t)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
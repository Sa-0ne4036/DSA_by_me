#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int i = 0, j = 0;
        while (i < a.length() && j < b.length())
        {
            if (a[i] == b[j])
            {
                i++;
                j++;
            }
            else if (a[i] == '?')
            {
                a[i] = b[j];
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }
        if (i >= a.length() && j < b.length())
        {
            cout << "NO" << endl;
        }
        else
        {
            for (int i = 0; i < a.length(); i++)
            {
                if (a[i] == '?')
                {
                    a[i] = 'a';
                }
            }
            cout << "YES" << endl;
            cout << a << endl;
        }
    }
    return 0;
}

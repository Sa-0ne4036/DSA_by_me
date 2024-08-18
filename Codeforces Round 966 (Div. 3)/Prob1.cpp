// do it before time ends

#include<bits/stdc++.h>
using namespace std;

bool isPossibleImportantInteger(string num, int n)
{
    if(n < 3)
    {
        return false;
    }
    else{
        return (num[0] == '1' && num[1] == '0' && (n == 3 && num[2] > '1' || n > 3 && num[2] > '0'));
    }
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string a;
        cin >> a;

        int n = a.size();

        if (isPossibleImportantInteger(a,n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
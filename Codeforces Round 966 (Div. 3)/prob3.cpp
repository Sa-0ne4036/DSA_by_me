// do it before time ends

#include <bits/stdc++.h>
using namespace std;

bool checkTemplateMatch(const vector<int> &a, const string &s)
{
    if (a.size() != s.size())
        return false;

    unordered_map<int, char> intToChar;
    unordered_map<char, int> charToInt;

    for (size_t i = 0; i < a.size(); ++i)
    {
        int num = a[i];
        char ch = s[i];

        if (intToChar.find(num) == intToChar.end())
        {
            intToChar[num] = ch;
        }
        else if (intToChar[num] != ch)
        {
            return false;
        }

        if (charToInt.find(ch) == charToInt.end())
        {
            charToInt[ch] = num;
        }
        else if (charToInt[ch] != num)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        int m;
        cin >> m;

        while (m--)
        {
            string s;
            cin >> s;

            if (checkTemplateMatch(a, s))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}

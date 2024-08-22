#include<bits/stdc++.h>

using namespace std;

int main()
{
    string username;
    cin >> username;

    // Use a set to store distinct characters
    set<char> distinct_chars;

    // Insert each character of the username into the set
    for (char ch : username)
    {
        distinct_chars.insert(ch);
    }

    // Check the number of distinct characters
    if (distinct_chars.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}

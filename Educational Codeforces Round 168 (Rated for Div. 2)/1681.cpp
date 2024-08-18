// do your work like no one can 

#include <bits/stdc++.h>
using namespace std;

int Get_time(string &s)
{
    int timetaken = 2;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            timetaken += 1;
        }
        else
        {
            timetaken += 2;
        }
    }
    return timetaken;
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string good_password;
        int taken_time = -1;
        for (int i = 0; i <= s.size(); i++)
        {
            for (char ch = 'a'; ch <= 'z'; ch++)
            {
                string new_pass = s.substr(0, i) + ch + s.substr(i);
                int time_new = Get_time(new_pass);
                if (time_new > taken_time)
                {
                    taken_time = time_new;
                    good_password = new_pass;
                }
            }
        }
        cout << good_password << endl;
    }

    return 0;
}
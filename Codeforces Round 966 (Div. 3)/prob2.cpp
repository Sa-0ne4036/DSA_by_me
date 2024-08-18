// do it before time ends

#include<bits/stdc++.h>
using namespace std;

bool checkSeating(int n, const vector<int> &seats)
{

    vector<bool> occupied(n + 1, false);

    for (int i = 0; i < n; ++i)
    {
        int seat = seats[i];

        if (i == 0)
        {
            occupied[seat] = true;
        }
        else
        {

            bool neighborOccupied = false;

            if (seat > 1 && occupied[seat - 1])
            {
                neighborOccupied = true;
            }

            if (seat < n && occupied[seat + 1])
            {
                neighborOccupied = true;
            }

            if (!neighborOccupied)
            {
                return false;
            }

            occupied[seat] = true;
        }
    }

    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> seats(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> seats[i];
        }

        if (checkSeating(n, seats))
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

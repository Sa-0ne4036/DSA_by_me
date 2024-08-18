// do it before time ends

#include <bits/stdc++.h>
using namespace std;

long long compDistance(long long x1, long long y1, long long x2, long long y2)
{
    long long delX = x2 - x1;
    long long delY = y2 - y1;
    return delX * delX + delY * delY;
}

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        long long Points;
        cin >> Points;

        vector<long long> xCoor(Points), yCoor(Points);
        for (long long i = 0; i < Points; i++)
        {
            cin >> xCoor[i] >> yCoor[i];
        }

        long long SX, SY, DX, DY;
        cin >> SX >> SY >> DX >> DY;

        long long iniDis = compDistance(SX, SY, DX, DY);

        bool closePoint = false;

        for (long long i = 0; i < Points; i++)
        {
            if (iniDis >= compDistance(xCoor[i], yCoor[i], DX, DY))
            {
                closePoint = true;
                break;
            }
        }

        if (closePoint)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

// we will do it one day , keep going 

int main() {
    int t ;

    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> A(n);
        for (int i = 0; i < n; ++i)
        {
            A[i] = i + 1;
        }
        for (int i = 0; i < n; ++i)
        {
            cout << A[i] << " ";
        }
        cout << endl;
           
    }
     
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

bool x(const vector<int> &a, long long n, long long k)
{
    for (int i = 0; i < a.size(); i++)
    {
        long long diff = n - a[i];
        long long ans = diff/k;
        if(ans%2 != 0) return false;
        if((n >= a[i]+ans*k) && (n <= a[i]+(ans+1)*k))
        {
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        for (long long i = a[n-1]; i <= a[n-1]+k; i++)
        {
            bool check = x(a,i,k);
            if(check)
            {
                cout << i << endl;
              
                break;
            }
            

        }
      
                cout << -1 << endl;
    }
    return 0;
}

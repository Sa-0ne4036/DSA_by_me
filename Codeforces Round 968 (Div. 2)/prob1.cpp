#include<bits/stdc++.h>
using namespace std;

vector<string> evaluate_sequences(int count, const vector<pair<int, string>> &sequences)
{
    vector<string> outcomes;
    for (const auto &sequence : sequences)
    {
        int size = sequence.first;
        const string &chars = sequence.second;

        if (chars.front() != chars.back())
        {
            outcomes.push_back("YES");
        }
        else
        {
            outcomes.push_back("NO");
        }
    }
    return outcomes;
}

int main()
{
    int t;
    cin >> t;

    vector<pair<int, string>> a;

    for (int i = 0; i < t; ++i)
    {
        int n;
        string chars;
        cin >> n >> chars;

        a.push_back({n, chars});
    }

    vector<string> outcomes = evaluate_sequences(t, a);

    for (const auto &outcome : outcomes)
    {
        cout << outcome << endl;
    }

    return 0;
}

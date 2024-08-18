#include <iostream>
#include <deque>
#include <vector>

using namespace std;

// Function to calculate the strength of the array
vector<int> calculate_strength(const vector<pair<int, int>> &pairs)
{
    vector<int> result;
    deque<int> current;
    int seconds = 0;

    for (const auto &p : pairs)
    {
        int ai = p.first;
        int bi = p.second;

        // Add the current segment to the deque
        while (ai--)
        {
            current.push_back(bi);
        }

        // Calculate the strength for the current array state
        int new_seconds = 0;
        if (!current.empty())
        {
            int prev = current.front();
            while (!current.empty() && current.front() == prev)
            {
                current.pop_front();
            }
            while (!current.empty())
            {
                int cur = current.front();
                current.pop_front();
                if (cur != prev)
                {
                    ++new_seconds;
                }
                prev = cur;
            }
            new_seconds++;
        }

        // Add the result for the current prefix
        result.push_back(seconds + new_seconds);
        seconds += new_seconds;
    }

    return result;
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

        vector<pair<int, int>> pairs(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> pairs[i].first >> pairs[i].second;
        }

        vector<int> strengths = calculate_strength(pairs);
        for (int strength : strengths)
        {
            cout << strength << " ";
        }
        cout << "\n";
    }

    return 0;
}

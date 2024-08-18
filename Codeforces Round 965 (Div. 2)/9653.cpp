#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int array_size, max_operations;
        cin >> array_size >> max_operations;

        vector<int> values(array_size), binary_flags(array_size);

        for (int i = 0; i < array_size; ++i)
        {
            cin >> values[i];
        }

        for (int i = 0; i < array_size; ++i)
        {
            cin >> binary_flags[i];
        }

        vector<int> indices(array_size);
        iota(indices.begin(), indices.end(), 0);

        // Sort indices such that values[indices[i]] is in descending order
        sort(indices.begin(), indices.end(), [&](int i, int j)
             { return values[i] > values[j]; });

        int required_count = ((array_size - 1) >> 1) + 1;
        int64_t lower_bound = 0, upper_bound = 1e10;

        while (lower_bound < upper_bound)
        {
            int64_t mid = (lower_bound + upper_bound + 1) >> 1;
            bool feasible = false;

            for (int idx : indices)
            {
                if (binary_flags[idx] == 1)
                {
                    if (values[idx] + max_operations >= mid)
                    {
                        feasible = true;
                    }

                    int64_t deficit = mid - values[idx] - max_operations;
                    int remaining = required_count;

                    for (int other_idx : indices)
                    {
                        if (other_idx == idx)
                            continue;
                        if (remaining == 0)
                            break;
                        if (values[other_idx] >= deficit)
                            remaining--;
                    }

                    if (remaining == 0)
                        feasible = true;
                    break;
                }
            }

            if (!feasible)
            {
                for (int idx : indices)
                {
                    if (binary_flags[idx] == 0)
                    {
                        int64_t remaining = required_count;
                        int64_t total_deficit = 0;
                        int64_t required_value = mid - values[idx];

                        for (int other_idx : indices)
                        {
                            if (other_idx == idx)
                                continue;
                            if (remaining == 0)
                                break;
                            if (values[other_idx] >= required_value)
                            {
                                remaining--;
                            }
                            else if (binary_flags[other_idx])
                            {
                                total_deficit += required_value - values[other_idx];
                                remaining--;
                            }
                        }

                        if (remaining == 0 && total_deficit <= max_operations)
                        {
                            feasible = true;
                        }
                        break;
                    }
                }
            }

            if (feasible)
            {
                lower_bound = mid;
            }
            else
            {
                upper_bound = mid - 1;
            }
        }

        cout << lower_bound << '\n';
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>

long long gcd(long long x, long long y)
{
    if (y == 0)
        return x;
    else
        return gcd(y, x % y);
}

int main()
{
    int t{};
    std::cin >> t;
    for (int i = 1; i <= t; i++)
    {
        long long n{}, max_val{}, min_val{};
        std::cin >> n;
        std::vector<int> beauty_levels(n, 0);
        for (long long i = 0; i < n; i++)
        {
            std::cin >> beauty_levels[i];
        }
        if (!beauty_levels.empty())
        {
            min_val = *std::min_element(beauty_levels.begin(), beauty_levels.end());
            max_val = *std::max_element(beauty_levels.begin(), beauty_levels.end());
        }
        long long diff{max_val - min_val};
        long long rem_1 = min_val % diff;
        long long rem_2 = max_val % diff;
        min_val = min_val + (diff - rem_1);
        max_val = max_val + (diff - rem_2);
        long long pleasure = gcd(max_val, min_val);
        std::cout << pleasure << "\n";
    }
    return 0;
}
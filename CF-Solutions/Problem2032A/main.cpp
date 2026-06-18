#include <iostream>
#include <vector>

int main()
{
    int t{};
    std::cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n{};
        std::cin >> n;
        std::vector<int> switch_state(2 * n);
        int zero_count{}, one_count{};
        for (int i = 0; i < 2 * n; i++)
        {
            std::cin >> switch_state[i];
            if (switch_state[i] == 0)
                zero_count++;
            else
                one_count++;
        }
        if (zero_count % 2 == 0)
        {
            std::cout << 0 << " " << std::min(zero_count, one_count) << "\n";
        }
        else
        {
            std::cout << 1 << " " << std::min(zero_count, one_count) << "\n";
        }
    }

    return 0;
}
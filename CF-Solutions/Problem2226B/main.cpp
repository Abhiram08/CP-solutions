#include <iostream>
#include <cmath>
#include <numeric>
#include <vector>

int main()
{
    int t{};
    std::cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n{};
        std::cin >> n;
        std::vector<int> numbers(n);
        for (int i = 0; i < n; ++i)
        {
            std::cin >> numbers[i];
        }
        int count{};
        for (int i = 0; i < n - 1; i++)
        {
            if (std::gcd(numbers[i], numbers[i + 1]) == std::abs(numbers[i] - numbers[i + 1]))
            {
                count++;
            }
        }
        std::cout << count << std::endl;
    }

    return 0;
}
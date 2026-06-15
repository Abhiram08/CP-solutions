#include <iostream>

int main()
{
    long long n{};
    std::cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        long long total{(i * i) * ((i * i) - 1) / 2};
        long long remove{(i - 2) * (i - 1) * 2 * 2};
        long long answer{total - remove};
        std::cout << answer << "\n";
    }
    return 0;
}
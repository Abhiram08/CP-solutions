#include <iostream>

int main()
{
    int t{};
    std::cin >> t;
    for (int i = 1; i <= t; i++)
    {
        long long x{};
        std::cin >> x;
        std::cout << 2 * x << "\n";
    }
}
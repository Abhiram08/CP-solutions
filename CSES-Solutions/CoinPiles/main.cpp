#include <iostream>
#include <cmath>

int main()
{
    int t{};
    std::cin >> t;
    for (int i = 1; i <= t; i++)
    {
        double a{}, b{};
        std::cin >> a >> b;
        double x{(2 * b - a) / 3}, y{(2 * a - b) / 3};
        if (x >= 0 && y >= 0 && x == std::floor(x) && y == std::floor(y))
        {
            std::cout << "YES\n";
        }
        else
        {
            std::cout << "NO\n";
        }
    }
}
#include <iostream>

int main()
{
    long long x{}, y{}, t{};
    std::cin >> t;
    for (long long i = 1; i <= t; i++)
    {
        std::cin >> x >> y;
        if (x > y)
        {
            if (x % 2 == 0)
                std::cout << (x * x - (y - 1)) << "\n";
            else
                std::cout << ((x - 1) * (x - 1) + 1 + (y - 1)) << "\n";
        }
        else if (x < y)
        {
            if (y % 2 == 1)
                std::cout << (y * y - (x - 1)) << "\n";
            else
                std::cout << ((y - 1) * (y - 1) + 1 + (x - 1)) << "\n";
        }
        else
        {
            if (x % 2 == 0)
            {
                std::cout << (x * x - (x - 1)) << "\n";
            }
            else
            {
                std::cout << ((x - 1) * (x - 1) + 1 + (x - 1)) << "\n";
            }
        }
    }

    return 0;
}
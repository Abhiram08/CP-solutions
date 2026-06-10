#include <iostream>

int main()
{
    int t{};
    std::cout << "Enter a number";
    std::cin >> t;
    for (int i = 1; i <= t; i++)
    {
        if (i % 3 == 0)
            std::cout << "fizz";
        if (i % 5 == 0)
            std::cout << "buzz";
        if (i % 7 == 0)
            std::cout << "pop";
        if (i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
            std::cout << i;
        std::cout << "\n";
    }
}
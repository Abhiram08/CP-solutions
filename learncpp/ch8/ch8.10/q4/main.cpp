#include <iostream>

int main()
{
    int t{};
    std::cout << "Enter a number";
    std::cin >> t;
    for (int i = 1; i <= t; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            std::cout << "fizzbuzz\n";
        else if (i % 3 == 0)
            std::cout << "fizz\n";
        else if (i % 5 == 0)
            std::cout << "buzz\n";
        else
            std::cout << i << "\n";
    }
    return 0;
}
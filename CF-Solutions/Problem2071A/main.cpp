#include <iostream>

int main()
{
    int t{};
    std::cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int k{};
        std::cin >> k;
        if ((k - 1) % 3 == 0)
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
    }
    return 0;
}
#include <iostream>

int main()
{
    int t{};
    std::cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int l{}, r{};
        std::cin >> l >> r;
        if (l == 1 && 1 == r)
            std::cout << 1 << "\n";
        else
            std::cout << r - l << "\n";
    }
    return 0;
}
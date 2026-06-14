#include <iostream>

int main()
{
    int n{};
    std::cin >> n;
    if (n > 3 && n != 1)
    {
        for (int i = 2; i <= n; i += 2)
        {
            std::cout << i << " ";
        }
        for (int i = 1; i <= n; i += 2)
        {
            std::cout << i << " ";
        }
    }
    else if (n == 1)
    {
        std::cout << "1";
    }
    else
    {
        std::cout << "NO SOLUTION";
    }

    return 0;
}
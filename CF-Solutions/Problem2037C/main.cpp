#include <iostream>

int main()
{
    int t{};
    std::cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n{};
        std::cin >> n;
        if (n > 4)
        {
            for (int i = 1; i <= n; i += 2)
            {
                if (i == 5)
                    continue;
                else
                    std::cout << i << " ";
            }
            std::cout << "5 4 ";
            for (int i = 2; i <= n; i += 2)
            {
                if (i == 4)
                    continue;
                else
                    std::cout << i << " ";
            }
            std::cout << "\n";
        }
        else
            std::cout << "-1\n";
    }
    return 0;
}
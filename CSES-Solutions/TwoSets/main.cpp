#include <iostream>

int main()
{
    int n{};
    std::cin >> n;
    int sum = n * (n + 1) / 2;
    if (sum % 2 == 0)
    {
        std::cout << "YES\n";
        if (n % 2 == 1)
        {
            std::cout << n / 2 + 1 << "\n1 2 ";
            for (int i = 4; i <= n; i += 4)
            {
                std::cout << i << " " << i + 3 << " ";
            }
            std::cout << "\n";
            std::cout << n / 2 << "\n3 ";
            for (int i = 5; i <= n; i += 4)
            {
                std::cout << i << " " << i + 1 << " ";
            }
        }
        else
        {
            std::cout << n / 2 << "\n";
            for (int i = 1; i <= n; i += 4)
                std::cout << i << " " << i + 3 << " ";
            std::cout << "\n";
            std::cout << n / 2 << "\n";
            for (int i = 2; i <= n; i += 4)
                std::cout << i << " " << i + 1 << " ";
        }
    }
    else
        std::cout << "NO";
    return 0;
}
#include <iostream>
#include <string>

int main()
{
    int t{};
    std::cin >> t;
    for (int i = 1; i <= t; i++)
    {
        long long n{};
        std::cin >> n;
        if (n >= 4)
        {
            std::string num = "51";
            if (n % 2 == 0)
            {
                for (long long i = 1; i <= (n - 4) / 2; i++)
                {
                    num.insert(0, "50");
                }
                long long x{std::stoi(num)};
                std::cout << static_cast<long long>(66 * x) << "\n";
            }
            else
            {
                num.insert(0, "5");
                for (long long i = 1; i <= (n - 4) / 2; i++)
                {
                    num.insert(0, "50");
                }
                long long x{std::stoi(num)};
                std::cout << static_cast<long long>(66 * x) << "\n";
            }
        }
        else if (n == 2)
        {
            std::cout << "66\n";
        }
        else
        {
            std::cout << "-1\n";
        }
    }
}
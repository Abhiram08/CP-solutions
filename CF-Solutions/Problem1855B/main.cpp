#include <iostream>

int main()
{
    int t{};
    std::cin >> t;
    for (int i = 1; i <= t; i++)
    {
        long long n{}, length{1}, max_length{1};
        std::cin >> n;
        if (n % 2 == 1)
            std::cout << 1 << "\n";
        else
        {
            int i{1};
            while (true)
            {
                if (n % i != 0)
                {
                    break;
                }
                i++;
            }
            std::cout << i - 1 << "\n";
        }
    }
}
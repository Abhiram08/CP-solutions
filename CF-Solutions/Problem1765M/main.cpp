#include <iostream>
#include <numeric>

int main()
{
    int t{};
    std::cin >> t;
    for (int i = 1; i <= t; i++)
    {
        long long n{};
        std::cin >> n;
        long long a{1};
        for (long long i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                a = n / i;
                break;
            }
        }
        std::cout << a << " " << n - a << "\n";
    }
    return 0;
}
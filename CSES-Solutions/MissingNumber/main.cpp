#include <iostream>
#include <vector>
#include <numeric>

int main()
{
    long long n{};
    std::cin >> n;
    long long sum_correct = (n * (n + 1)) / 2;
    long long sum_entered{};
    for (long long i = 1; i <= n - 1; i++)
    {
        long long x{};
        std::cin >> x;
        sum_entered += x;
    }
    std::cout << sum_correct - sum_entered;
}
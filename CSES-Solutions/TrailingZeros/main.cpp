#include <iostream>

int main()
{
    long long n{};
    std::cin >> n;
    long long x{5}, sum{};
    while (n >= x)
    {
        sum = sum + (n / x);
        x = x * 5;
    }
    std::cout << sum;
    return 0;
}
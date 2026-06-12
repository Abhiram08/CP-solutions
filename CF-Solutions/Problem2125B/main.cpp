#include <iostream>
#include <cmath>

long long gcd(long long x, long long y)
{
    if (y == 0)
        return x;
    else
        return gcd(y, x % y);
}
int main()
{
    int t{};
    std::cin >> t;
    for (int i = 1; i <= t; i++)
    {
        long long a{}, b{}, k{};
        std::cin >> a >> b >> k;
        long long g = gcd(std::max(a, b), std::min(a, b));
        if (std::max(a / g, b / g) <= k)
            std::cout << "1\n";
        else
            std::cout << "2\n";
    }
}
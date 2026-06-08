#include <iostream>

long long gcd(long long x, long long y)
{
    if (y == 0)
    {
        return x;
    }
    else
    {
        return gcd(y, x % y);
    }
}

long long lcm(long long p, long long q)
{
    long long l{p / gcd(q, p) * q};
    if ((l == p) || (l == q))
        return q * (q / p);
    else
        return l;
}
int main()
{
    long long t{};
    long long a{};
    long long b{};
    std::cin >> t;
    for (long long i = 1; i <= t; i++)
    {
        std::cin >> a >> b;
        std::cout << lcm(a, b) << "\n";
    }
    return 0;
}
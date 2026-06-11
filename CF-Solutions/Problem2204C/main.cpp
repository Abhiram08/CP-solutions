#include <iostream>
#include <vector>
#include <algorithm>

long long gcd(long long x, long long y)
{
    if (y == 0)
        return x;
    else
        return gcd(y, x % y);
}

long long lcm(long long x, long long y)
{
    return x / gcd(x, y) * y;
}

void getAnswer(long long a, long long b, long long c, long long m)
{
    long long p{lcm(std::max(b, c), std::min(b, c))};
    long long A = m / a;
    long long B = m / b;
    long long C = m / c;
    long long AB = m / lcm(std::max(a, b), std::min(a, b));
    long long BC = m / lcm(std::max(c, b), std::min(c, b));
    long long CA = m / lcm(std::max(a, c), std::min(a, c));
    long long ABC = m / lcm(std::max(a, p), std::min(a, p));
    long long answer = (A - AB - CA + ABC) * 6 + (AB + CA - 2 * ABC) * 3 + (ABC) * 2;
    std::cout << answer;
}

int main()
{
    // Add these two lines at the start of main — always
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    long long a{}, b{}, c{};
    long long m{};
    long long t{};
    std::cin >> t;
    for (long long i = 1; i <= t; i++)
    {
        a = 0;
        b = 0;
        c = 0;
        m = 0;
        std::cin >> a >> b >> c >> m;
        getAnswer(a, b, c, m);
        std::cout << " ";
        getAnswer(b, c, a, m);
        std::cout << " ";
        getAnswer(c, a, b, m);
        std::cout << "\n";
    }

    return 0;
}

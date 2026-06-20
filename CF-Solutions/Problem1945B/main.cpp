#include <iostream>

int main()
{
    int t{};
    std::cin >> t;
    for (int i = 1; i <= t; i++)
    {
        long long a{}, b{}, m{};
        std::cin >> a >> b >> m;
        long long a_rockets = ((m + 1) % a == 0) ? (m + 1) / a : (m + 1) / a + 1;
        long long b_rockets = ((m + 1) % b == 0) ? (m + 1) / b : (m + 1) / b + 1;
        std::cout << a_rockets + b_rockets << "\n";
    }
    return 0;
}
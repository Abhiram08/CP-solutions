#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>
using namespace std;

int main()
{
    int t{};
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        long long n{}, g{0};
        bool has_mismatch = false;
        cin >> n;
        vector<long long> numbers(n + 1);
        long long mismatch{}, least_mismatch{n - 1};
        for (long long i = 1; i < n + 1; i++)
        {
            cin >> numbers[i];
            if (numbers[i] != i)
            {
                mismatch = abs(numbers[i] - i);
                g = gcd(g, mismatch);
            }
        }
        std::cout << g << "\n";
    }
    return 0;
}
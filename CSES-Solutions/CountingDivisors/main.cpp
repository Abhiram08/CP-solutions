#include <iostream>
#include <vector>

using namespace std;

const int MAX_X = 1000000;
int divisor_count[MAX_X + 1];

// 1. Precomputing divisor counts using a sieve technique
void precompute_divisors()
{
    for (int i = 1; i <= MAX_X; i++)
    {
        for (int j = i; j <= MAX_X; j += i)
        {
            divisor_count[j]++;
        }
    }
}

int main()
{
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Run the sieve precomputation
    precompute_divisors();

    int n;
    if (cin >> n)
    {
        while (n--)
        {
            int x;
            cin >> x;
            // 2. Answering each query in O(1) constant time
            cout << divisor_count[x] << "\n";
        }
    }

    return 0;
}

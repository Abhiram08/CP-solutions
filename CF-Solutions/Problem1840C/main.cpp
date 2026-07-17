#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t{};
    cin >> t;
    for (long long j = 1; j <= t; j++)
    {
        long long n{}, k{}, q{};
        cin >> n >> k >> q;
        long long count{}, cases{};
        for (long long i = 0; i < n; i++)
        {
            long long x{};
            cin >> x;
            if (x <= q)
            {
                count++;
            }
            else
            {
                if (count >= k)
                    cases = cases + ((count - k + 1) * (count - k + 2)) / 2;
                count = 0;
            }
        }
        if (count >= k)
        {
            cases += ((count - k + 1) * (count - k + 2)) / 2;
        }
        cout << cases << "\n";
    }
}
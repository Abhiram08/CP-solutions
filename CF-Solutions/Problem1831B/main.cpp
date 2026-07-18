#include <iostream>
#include <vector>
#include <set>
#include <algorithm> // Included for max

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n{};
        cin >> n;
        vector<long long> a(n);
        vector<long long> b(n);
        vector<long long> max_a(2 * n + 1, 0);
        vector<long long> max_b(2 * n + 1, 0);

        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (long long i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        if (n == 1)
        {
            max_a[a[0]] = 1;
            max_b[b[0]] = 1;
        }
        else
        {
            long long count = 1;
            for (int i = 1; i < n; i++)
            {
                if (a[i] == a[i - 1])
                {
                    count++;
                }
                else
                {
                    max_a[a[i - 1]] = max(max_a[a[i - 1]], count);
                    count = 1;
                }
            }
            max_a[a[n - 1]] = max(max_a[a[n - 1]], count);

            count = 1;
            for (int i = 1; i < n; i++)
            {
                if (b[i] == b[i - 1])
                {
                    count++;
                }
                else
                {
                    max_b[b[i - 1]] = max(max_b[b[i - 1]], count);
                    count = 1;
                }
            }
            max_b[b[n - 1]] = max(max_b[b[n - 1]], count);
        }

        long long ans{};
        for (int i = 1; i <= 2 * n; i++)
        {
            ans = max(ans, max_a[i] + max_b[i]);
        }
        cout << ans << "\n";
    }
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    cin >> t;
    for (int j = 1; j <= t; j++)
    {
        int n{};
        cin >> n;
        int operations{}, count_1{}, count_2{};
        for (int i = 1; i <= n; i++)
        {
            int val{};
            cin >> val;
            if (val == 0)
                operations++;
            else if (val == 1)
                count_1++;
            else
                count_2++;
        }
        int x{min(count_1, count_2)};
        operations += x;
        count_1 -= x;
        count_2 -= x;
        if (count_1 == 0)
        {
            operations += count_2 / 3;
        }
        else
        {
            operations += count_1 / 3;
        }
        cout << operations << "\n";
    }

    return 0;
}
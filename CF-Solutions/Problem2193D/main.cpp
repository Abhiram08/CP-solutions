#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        long long n{};
        cin >> n;
        vector<long long> sword_strengths(n);
        for (long long i = 0; i < n; i++)
            cin >> sword_strengths[i];
        vector<long long> sword_strikes(n);
        for (long long i = 0; i < n; i++)
            cin >> sword_strikes[i];
        sort(sword_strengths.begin(), sword_strengths.end(), greater<int>());
        long long sum{}, ans{}, swords_required{};
        for (long long difficulty = 0; difficulty < n; difficulty++)
        {
            while (swords_required < n && (sum + sword_strikes[swords_required]) <= difficulty + 1)
            {
                sum += sword_strikes[swords_required];
                swords_required++;
            }
            // for (swords_required = 0; swords_required < n;)
            // {
            //     if (sum + sword_strikes[swords_required] <= difficulty + 1)
            //     {
            //         sum += sword_strikes[swords_required];
            //         swords_required++;
            //     }
            // }
            ans = max(ans, (swords_required) * (sword_strengths[difficulty]));
        }
        cout << ans << "\n";
    }
}
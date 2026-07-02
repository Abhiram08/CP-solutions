#include <iostream>
#include <vector>
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
        vector<int> numbers(n);
        for (int i = 0; i < n; i++)
            cin >> numbers[i];
        int ans{};
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                ans = max(ans, numbers[i] ^ numbers[j]);
            }
        }
        cout << ans << "\n";
    }
}
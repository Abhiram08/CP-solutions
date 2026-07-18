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
        int n{}, k{};
        cin >> n >> k;
        vector<int> numbers(n);
        bool canDo = false;
        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];
            if (numbers[i] % k == 0)
                canDo = true;
        }
        if (canDo)
            cout << "0\n";
        else
        {
            if (k == 4)
            {
                int count{};
                bool p = false;
                for (int i = 0; i < n; i++)
                {
                    if (numbers[i] % 2 == 0)
                        count++;
                    if (count == 2)
                    {
                        p = true;
                        break;
                    }
                    if (p)
                        cout << "0\n";
                    else
                        cout << "2\n";
                }
            }
            else
            {
                int ans{};
                for (int i = 0; i < n; i++)
                {
                    ans = max(ans, numbers[i] % k);
                }
                cout << k - ans << "\n";
            }
        }
    }
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n{}, x{};
    cin >> n >> x;
    vector<pair<int, int>> num(n);
    for (int i = 0; i < n; i++)
    {
        cin >> num[i].first;
        num[i].second = i;
    }
    sort(num.begin(), num.end());

    for (int i = 0; i < n; i++)
    {
        int l{0}, r{n - 1};
        while (l != r)
        {
            if (l != i && r != i && num[l].first + num[r].first + num[i].first == x)
            {
                cout << num[l].second + 1 << " " << num[i].second + 1 << " " << num[r].second + 1 << "\n";
                return 0;
            }
            else if (num[l].first + num[r].first + num[i].first > x)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
    }
    cout << "IMPOSSIBLE" << "\n";
}
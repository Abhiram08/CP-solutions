#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n{}, x{};
    cin >> n >> x;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a.begin(), a.end());
    int l = 0, r = n - 1, sum{};
    while (l < r)
    {
        sum = a[l].first + a[r].first;
        if (sum == x)
        {
            cout << a[l].second + 1 << " " << a[r].second + 1;
            return 0;
        }
        else if (sum > x)
        {
            r--;
        }
        else
        {
            l++;
        }
    }
    cout << "IMPOSSIBLE";
}
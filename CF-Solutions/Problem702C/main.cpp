#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n{}, m{};
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int min_r{}, max_dist{}, r{};
    for (int i = 0; i < n; i++)
    {
        int tower_right{lower_bound(b.begin(), b.end(), a[i]) - b.begin()};
        int tower_left(tower_right - 1);
        if (tower_left < 0)
        {
            min_r = b[tower_right] - a[i];
        }
        else if (tower_right == m)
        {
            min_r = a[i] - b[tower_left];
        }
        else
        {
            min_r = min(a[i] - b[tower_left], b[tower_right] - a[i]);
        }
        max_dist = max(max_dist, min_r);
    }
    cout << max_dist;
}
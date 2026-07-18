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
        int n{};
        cin >> n;
        vector<vector<int>> list(n);
        for (int j = 0; j < n; j++)
        {
            int x{};
            cin >> x;
            list[j].resize(x);
            for (int k = 0; k < x; k++)
            {
                cin >> list[j][k];
            }
        }
        for (auto &row : list)
        {
            sort(row.begin(), row.end());
        }
        int snd_min{list[0][1]}, snd_min_index{};
        for (int i = 0; i < n; i++)
        {
            if (list[i][1] < snd_min)
            {
                snd_min = list[i][1];
                snd_min_index = i;
            }
        }
        int beauty{}, p{INT_MAX};
        for (int i = 0; i < n; i++)
        {
            p = min(p, list[i][0]);
            if (i != snd_min_index)
            {
                beauty += list[i][1];
            }
        }
        beauty += p;
        cout << beauty << "\n";
    }
}
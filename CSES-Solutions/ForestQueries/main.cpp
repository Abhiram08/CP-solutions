#include <iostream>
using namespace std;

int main()
{
    int n{}, q{};
    cin >> n >> q;
    int forest[n + 1][n + 1], tree_pref[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char a;
            cin >> a;
            forest[i][j] = a == '*';
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            tree_pref[i][j] = tree_pref[i - 1][j] + tree_pref[i][j - 1] - tree_pref[i - 1][j - 1] + forest[i][j];
        }
    }
    for (int i = 1; i <= q; i++)
    {
        int y1{}, x1{}, y2{}, x2{};
        cin >> y1 >> x1 >> y2 >> x2;
        // Changed x to y, and y to x to match row/col indexing
        cout << tree_pref[y2][x2] - tree_pref[y1 - 1][x2] - tree_pref[y2][x1 - 1] + tree_pref[y1 - 1][x1 - 1] << "\n";
    }
}
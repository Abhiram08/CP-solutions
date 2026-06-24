#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    bool canSort = true;
    for (int i = 1; i <= n; i++)
    {
        int val;
        cin >> val; // Always consume the entire input

        if (!canSort)
            continue; // Skip calculations if already invalid

        int r = -1;
        // Check if one index divides the other cleanly
        if (val >= i && val % i == 0)
        {
            r = val / i;
        }
        else if (i >= val && i % val == 0)
        {
            r = i / val;
        }

        // If they don't divide each other, or the ratio is not a power of 2
        if (r < 0 || (r & (r - 1)) != 0)
        {
            canSort = false;
        }
    }

    if (canSort)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

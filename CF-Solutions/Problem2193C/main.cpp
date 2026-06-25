#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n{}, q{};
        cin >> n >> q;
        vector<int> a(n + 2);
        vector<int> b(n + 2);
        a[n + 1] = 0;
        b[n + 1] = 0;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
            cin >> b[i];
        for (int i = n; i >= 1; i--)
            a[i] = max(max(a[i], a[i + 1]), b[i]);
        vector<int> sum(n + 2, 0);
        sum[0] = 0;
        for (int i = 1; i <= n; i++)
            sum[i] = sum[i - 1] + a[i];
        for (int i = 1; i <= q; i++)
        {
            int l{}, r{};
            cin >> l >> r;
            cout << sum[r] - sum[l - 1] << " ";
        }
        cout << "\n";
    }

    return 0;
}
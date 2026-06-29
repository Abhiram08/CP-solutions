#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n{}, t{};
    cin >> n >> t;
    vector<int> minutes(n);
    for (int i = 0; i < n; i++)
        cin >> minutes[i];
    int ans{0}, sum{0};
    int r = -1;
    for (int l = 0; l < n;)
    {
        while (r + 1 < n && sum + minutes[r + 1] <= t)
            sum += minutes[++r];
        ans = max(ans, r - l + 1);

        sum -= minutes[l];
        l++;
    }
    cout << ans << "\n";
}
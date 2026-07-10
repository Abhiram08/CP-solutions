#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // Store as pair: {duration, deadline}
    vector<pair<int, int>> tasks(n);
    for (int i = 0; i < n; i++)
    {
        cin >> tasks[i].first >> tasks[i].second;
    }

    // Sort automatically orders by the first element (duration)
    sort(tasks.begin(), tasks.end());

    long long current_time = 0;
    long long total_reward = 0;

    for (int i = 0; i < n; i++)
    {
        current_time += tasks[i].first;
        total_reward += (tasks[i].second - current_time);
    }

    cout << total_reward << "\n";
    return 0;
}

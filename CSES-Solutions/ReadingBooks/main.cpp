#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    long long n{};
    cin >> n;
    vector<long long> durations(n);
    for (long long i = 0; i < n; i++)
        cin >> durations[i];
    sort(durations.begin(), durations.end());
    long long sum{};
    for (long long i = 0; i < n - 1; i++)
    {
        sum += durations[i];
    }
    if (sum < durations[n - 1])
        cout << durations[n - 1] * 2;
    else
        cout << sum + durations[n - 1];
}
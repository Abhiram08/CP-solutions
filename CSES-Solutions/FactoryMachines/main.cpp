#include <iostream>
#include <vector>
using namespace std;

long long number_of_products(const vector<long long> &times,
                             long long total_time,
                             long long t)
{
    long long products = 0;

    for (int i = 1; i < times.size(); i++)
    {
        products += total_time / times[i];

        if (products >= t)
            return products; // Stop immediately
    }

    return products;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n{}, t{}, max_time{};
    cin >> n >> t;
    vector<long long> time(n + 1);
    for (long long i = 1; i <= n; i++)
    {
        cin >> time[i];
        max_time = max(max_time, time[i]);
    }
    long long low = 1;
    long long high = max_time * t;
    while (low < high)
    {
        long long mid = low + (high - low) / 2;
        if (number_of_products(time, mid, t) >= t)
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << low << "\n";
}
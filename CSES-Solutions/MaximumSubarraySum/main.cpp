#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    long long n{};
    cin >> n;
    vector<long long> array(n + 1);
    vector<long long> pref_sum(n + 1);
    for (long long i = 1; i <= n; i++)
    {
        cin >> array[i];
        pref_sum[i] = pref_sum[i - 1] + array[i];
    }
    long long max_suubarray_sum = pref_sum[1];
    long long min_pref_sum = pref_sum[0];
    for (long long i = 1; i <= n; i++)
    {
        max_suubarray_sum = max(max_suubarray_sum, pref_sum[i] - min_pref_sum);
        min_pref_sum = min(min_pref_sum, pref_sum[i]);
    }
    cout << max_suubarray_sum;
}
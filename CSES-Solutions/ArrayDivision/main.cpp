#include <iostream>
#include <vector>
using namespace std;
bool can_make(const vector<long long> &array, long long s, long long k)
{
    long long sum{}, splits{};
    for (long long i = 1; i < array.size(); i++)
    {
        if (array[i] > s)
            return false;
        if (sum + array[i] <= s)
            sum += array[i];
        else
        {
            splits++;
            sum = array[i];
        }
    }
    return splits + 1 <= k;
}

int main()
{
    long long n{}, k{};
    cin >> n >> k;
    vector<long long> array(n + 1);
    for (long long i = 1; i <= n; i++)
        cin >> array[i];
    long long low = 1;
    long long high = 1e18;
    long long ans{};
    while (low <= high)
    {
        long long mid = (low + high) / 2;
        if (can_make(array, mid, k))
        {
            high = mid - 1;
            ans = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << ans;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    long long n{};
    cin >> n;
    vector<long long> lengths(n);
    for (long long i = 0; i < n; i++)
        cin >> lengths[i];
    sort(lengths.begin(), lengths.end());
    long long median{};
    if (n % 2 == 1)
    {
        median = lengths[n / 2];
    }
    else
    {
        median = (lengths[n / 2] + lengths[(n / 2) - 1]) / 2;
    }
    long long cost{};
    for (int i = 0; i < n; i++)
    {
        cost += abs(median - lengths[i]);
    }
    cout << cost;
}
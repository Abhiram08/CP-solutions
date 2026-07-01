#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        long long n{};
        cin >> n;
        vector<long long> number_of_ducks(n + 1);
        for (long long i = 1; i <= n; i++)
            cin >> number_of_ducks[i];
        for (long long i = 1; i < n; i++)
        {
            long long mid{};
            if (number_of_ducks[i] > number_of_ducks[i + 1])
            {
                mid = number_of_ducks[i];
                number_of_ducks[i] = number_of_ducks[i + 1];
                number_of_ducks[i + 1] += mid;
            }
        }
        cout << number_of_ducks[n] << "\n";
    }
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n{}, k{};
        cin >> n >> k;
        vector<int> array(n);
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        vector<int> frequencies;
        int count{1};
        for (int i = 0; i < n - 1; i++)
        {
            if (array[i] == array[i + 1])
                count++;
            else
            {
                frequencies.push_back(count);
                count = 1;
            }
        }
        frequencies.push_back(count);
        sort(frequencies.begin(), frequencies.end());
    }
}
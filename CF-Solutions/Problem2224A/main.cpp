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
        int n{};
        cin >> n;
        vector<long long> array(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> array[i];
        int count{};
        for (int i = n - 1; i >= 1; i--)
        {
            if (array[i] + array[i + 1] > array[i])
                array[i] = array[i] + array[i + 1];
            if (array[i] > 0)
                count++;
        }
        if (array[n] > 0)
            count++;
        cout << count << "\n";
    }
}
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int t{};
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n{};
        cin >> n;
        vector<int> array(n);
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        int higher{}, lower{};
        for (int i = 0; i < n; i++)
        {
            lower = 0;
            higher = 0;
            for (int j = i + 1; j < n; j++)
            {
                if (array[i] > array[j])
                {
                    lower++;
                }
                if (array[i] < array[j])
                {
                    higher++;
                }
            }
            cout << max(higher, lower) << " ";
        }
        cout << endl;
    }
    return 0;
}
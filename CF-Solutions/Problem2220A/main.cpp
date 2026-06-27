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
        int n{};
        cin >> n;
        vector<int> array(n);
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        sort(array.begin(), array.end(), greater<int>());
        for (int i = 0; i < n - 1; i++)
        {
            if (array[i] == array[i + 1])
            {
                found = true;
                break;
            }
        }
        if (found)
            cout << "-1\n";
        else
        {
            for (int i = 0; i < n; i++)
                cout << array[i] << " ";
            cout << "\n";
        }
    }

    return 0;
}
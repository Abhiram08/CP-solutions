#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t{};
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n{}, chair{};
        cin >> n;
        vector<int> p(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> p[i];
            if (p[i] <= i)
                chair++;
        }
        cout << chair << endl;
    }
    return 0;
}
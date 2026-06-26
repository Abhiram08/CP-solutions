#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t{};
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n{}, x1{}, x2{}, k{}, time{};
        cin >> n >> x1 >> x2 >> k;
        if (n >= 4)
            time = min(abs(x2 - x1), n - abs(x2 - x1)) + k;
        else
            time = 1;
        cout << time << "\n";
    }
    return 0;
}
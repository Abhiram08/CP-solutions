#include <iostream>
using namespace std;

int main()
{
    int x{};
    cin >> x;
    int count{};
    while (x > 0)
    {
        if (x & 1 == 1)
        {
            x -= 1;
            count++;
        }
        else
            x /= 2;
    }
    cout << count;
}
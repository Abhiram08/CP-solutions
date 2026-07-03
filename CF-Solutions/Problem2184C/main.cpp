#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t{};
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        long long n{}, k{};
        cin >> n >> k;
        bool can_do = false;
        long long time{};
        if (n == k)
        {
            can_do = true;
        }
        while (n > k)
        {
            if (n % 2 == 0)
            {
                time++;
                n /= 2;
                if (n == k)
                {
                    can_do = true;
                    break;
                }
            }
            else
            {
                if (n / 2 == k)
                {
                    time++;
                    can_do = true;
                    break;
                }
                else if ((n / 2) + 1 == k)
                {
                    time++;
                    can_do = true;
                    break;
                }
                else
                {
                    if ((n / 2) % 2 == 0)
                    {
                        time++;
                        n = (n / 2) + 1;
                    }
                    else
                    {
                        time++;
                        n /= 2;
                    }
                }
            }
        }
        if (can_do)
            cout << time << "\n";
        else
            cout << "-1\n";
    }
}
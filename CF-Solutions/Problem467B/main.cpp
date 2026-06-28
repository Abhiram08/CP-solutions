#include <iostream>
#include <vector>
using namespace std;

int numberOfDifferingBits(int army1, int army2)
{
    int differingBits{};
    while (army1 > 0 || army2 > 0)
    {
        if ((army1 & 1) != (army2 & 1))
            differingBits++;
        army1 = army1 >> 1;
        army2 = army2 >> 1;
    }
    return differingBits;
}

int main()
{
    int n{}, m{}, k{};
    cin >> n >> m >> k;
    vector<int> playerArmy(m + 1);
    for (int i = 0; i < m + 1; i++)
        cin >> playerArmy[i];
    int friends{};
    for (int i = 0; i < m; i++)
    {
        if (numberOfDifferingBits(playerArmy[i], playerArmy[m]) <= k)
            friends++;
    }
    cout << friends;
    return 0;
}
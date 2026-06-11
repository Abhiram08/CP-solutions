#include <iostream>
#include <vector>

int main()
{
    int t{};
    std::cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n{};
        bool found = false;
        std::cin >> n;
        std::vector<int> myVec(n, 0);
        for (int i = 0; i < n; i++)
        {
            std::cin >> myVec[i];
        }
        for (int i = 0; i < n; i++)
        {
            found = false;
            for (int j = i + 1; j < n; j++)
            {
                if ((myVec[j] % myVec[i]) % 2 == 0)
                {
                    std::cout << myVec[i] << " " << myVec[j] << "\n";
                    found = true;
                    break;
                }
            }
            if (found)
                break;
        }
        if (!(found))
            std::cout << "-1\n";
    }
}
#include <iostream>
#include <vector>

int main()
{
    int t{};
    std::cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n{};
        std::cin >> n;
        std::vector<int> myVec(n + 1, 0);
        std::cout << "1 ";
        for (int i = 2; i <= n; i++)
        {
            int j = i;
            while (j <= n)
            {
                if (myVec[j] == 0)
                {
                    std::cout << j << " ";
                    myVec[j] = 1;
                    j *= 2;
                }
            }
        }
    }
}
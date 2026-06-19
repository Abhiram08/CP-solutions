#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int t{};
    std::cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n{};
        std::cin >> n;
        std::vector<int> myVec(n);
        for (int i = 0; i < n; i++)
        {
            std::cin >> myVec[i];
        }
        rotate(myVec.begin(), myVec.begin() + 1, myVec.end());
        for (int i = 0; i < n; i++)
        {
            std::cout << myVec[i] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
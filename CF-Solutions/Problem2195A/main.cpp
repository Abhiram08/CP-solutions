#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    long long t{};
    std::cin >> t;
    for (long long i = 1; i <= t; i++)
    {
        int n{};
        std::cin >> n;
        std::vector<int> myVec(n, 0);
        for (int j = 0; j < n; j++)
        {
            std::cin >> myVec[j];
        }
        if ((std::find(myVec.begin(), myVec.end(), 1) != myVec.end()) && (std::find(myVec.begin(), myVec.end(), 67) != myVec.end()))
            std::cout << "YES" << "\n";
        else if ((std::find(myVec.begin(), myVec.end(), 67) != myVec.end()))
            std::cout << "YES" << "\n";
        else
            std::cout << "NO\n";
    }
}
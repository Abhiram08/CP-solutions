#include <iostream>
#include <vector>

int main()
{
    long long n{};
    std::cin >> n;
    std::vector<int> myVec(n);
    for (long long i = 0; i < n; i++)
    {
        std::cin >> myVec[i];
    }
    long long count{};
    for (int i = 0; i < n - 1; i++)
    {
        if (myVec[i] > myVec[i + 1])
        {
            count = count + (myVec[i] - myVec[i + 1]);
            myVec[i + 1] = myVec[i];
        }
    }
    std::cout << count;
}
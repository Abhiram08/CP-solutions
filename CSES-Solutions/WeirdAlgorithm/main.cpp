#include <iostream>

int main()
{
    long long num{};
    std::cin >> num;
    std::cout << num << " ";
    if (num != 1)
    {
        while (true)
        {
            if (num == 1)
                break;
            else if (num % 2 == 0)
            {
                num = num / 2;
                std::cout << num << " ";
            }
            else
            {
                num = num * 3 + 1;
                std::cout << num << " ";
            }
        }
    }
    return 0;
}
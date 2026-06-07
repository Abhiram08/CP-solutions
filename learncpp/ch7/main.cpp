#include <iostream>

void isEven(int n)
{
    if ((n % 2) == 0)
        std::cout << n << " is even";
    else
        std::cout << n << " is odd";
}

int main()
{
    std::cout << "Enter a number : ";
    int num;
    std::cin >> num;
    isEven(num);
    return 0;
}
#include <iostream>

int main()
{
    std::cout << "Enter your name : ";
    std::string name{};
    std::cin >> name;
    std::cout << "Enter your age : ";
    int age{};
    std::cin >> age;
    int nameLength{static_cast<int>(name.length())};
    std::cout << "Your age + Number of characters in your name : " << nameLength + age;
}
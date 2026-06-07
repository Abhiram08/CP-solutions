#include <iostream>
#include <string>

int main()
{
    std::string name1{};
    std::string name2{};
    int age1{};
    int age2{};

    std::cout << "Enter the name of person 1 : ";
    std::getline(std::cin >> std::ws, name1);
    std::cout << "Enter the age of person 1 : ";
    std::cin >> age1;
    std::cout << "Enter the name of person 2 : ";
    std::getline(std::cin >> std::ws, name2);
    std::cout << "Enter the age of person 2 : ";
    std::cin >> age2;

    if (age1 > age2)
        std::cout << name1 << " of age " << age1 << " is older than " << name2 << " of age " << age2;
    else
        std::cout << name2 << " of age " << age2 << " is older than " << name1 << " of age " << age1;
}
#include <iostream>
#include <string>

int main()
{
    int t{};
    std::cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int x{};
        std::cin >> x;
        std::string str = std::to_string(x);
        while (true)
        {

            if (x % 33 == 0)
            {
                std::cout << "YES\n";
                break;
            }
            else if (str.find("33") != std::string::npos && x != 33)
            {
                size_t pos = str.find("33");
                if (pos != std::string::npos)
                    str.erase(pos, 2);
                x = std::stoi(str);
                if (x % 33 == 0)
                {
                    std::cout << "YES\n";
                    break;
                }
            }
            else
            {
                std::cout << "NO\n";
                break;
            }
        }
    }
}
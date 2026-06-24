#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main()
{
    int t{};
    std::cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n{};
        std::cin >> n;
        std::string s{};
        std::cin >> s;
        bool repeat{true};
        while (repeat)
        {
            repeat = false;
            for (int i = 0; i < static_cast<int>(s.length()) - 1; i++)
            {
                if (s[i] == s[i + 1])
                {
                    s[i] = s[i + 1] = '*';
                    repeat = true;
                }
            }
            s.erase(std::remove(s.begin(), s.end(), '*'), s.end());
        }

        if (s.length() == 0)
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
    }

    return 0;
}
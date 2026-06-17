#include <iostream>
#include <string>

int main()
{
    int t{};
    std::cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n{}, k{};
        std::cin >> n >> k;
        std::string s;
        std::cin >> s;
        for (int i = 0; i < n - k; i++)
        {
            if (s[i] == '1')
            {
                s[i] = '0';
                s[i + k] = (s[i + k] == '0') ? '1' : '0';
            }
        }
        if (s.find('1') != std::string::npos)
            std::cout << "NO\n";
        else
            std::cout << "YES\n";
    }

    return 0;
}

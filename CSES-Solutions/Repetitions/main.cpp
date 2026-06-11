#include <iostream>
#include <string>
#include <cmath>

int main()
{
    std::string s{};
    std::cin >> s;
    s = s + " ";
    long long a{}, t{}, g{}, c{}, length{1}, max_length{};
    for (long long i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            length++;
        }
        else
        {
            if (length >= max_length)
                max_length = length;
            length = 1;
        }
    }

    std::cout << max_length;
}
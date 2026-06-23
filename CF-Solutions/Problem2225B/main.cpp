#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int t{};
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        string s{};
        cin >> s;
        bool alternating{true};
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                alternating = false;
                break;
            }
        }
        string s1{};
        if (s[0] == 'a')
        {
            for (int i = 0; i < s.length(); i++)
            {
                if (i % 2 == 0)
                {
                    s1 += 'a';
                }
                else
                {
                    s1 += 'b';
                }
            }
        }
        else
        {
            for (int i = 0; i < s.length(); i++)
            {
                if (i % 2 == 0)
                {
                    s1 += 'b';
                }
                else
                {
                    s1 += 'a';
                }
            }
        }
        vector<bool> matches(s1.length());
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == s1[i])
            {
                matches[i] = true;
            }
            else
            {
                matches[i] = false;
            }
        }
        int count{0};
        bool in_block{false};
        for (int i = 0; i < matches.size(); i++)
        {
            if (matches[i] == false)
            {
                if (!in_block)
                {
                    count++;
                    in_block = true; // Started a new block
                }
            }
            else
            {
                in_block = false; // Exited the block
            }
        }
        if (count == 1 || count == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
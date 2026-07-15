#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t{};
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        string s;
        cin >> s;
        int cnt0{}, cnt1{};
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == '0')
                cnt0++;
            else
                cnt1++;
        }
        string t{""};
        for (int j = 0;; j++)
        {
            if (s[j] == '0')
            {
                if (cnt1 > 0)
                {
                    t += '1';
                    cnt1--;
                }
                else
                {
                    break;
                }
            }
            else
            {
                if (cnt0 > 0)
                {
                    t += '0';
                    cnt0--;
                }
                else
                {
                    break;
                }
            }
        }
        cout << s.length() - t.length() << "\n";
    }
}
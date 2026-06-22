#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int t{};
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        string s1{}, s2{};
        cin >> s1;
        int ans{}, pref2{}, suff13{};
        for (int j = 0; j < s1.length(); j++)
        {
            if (s1[j] == '1' || s1[j] == '3')
                suff13++;
        }
        ans = suff13;
        for (int k = 0; k < s1.length(); k++)
        {
            if (s1[k] == '1' || s1[k] == '3')
            {
                suff13 -= 1;
            }
            if (s1[k] == '2')
            {
                pref2++;
            }
            ans = max(ans, pref2 + suff13);
        }
        cout << s1.length() - ans << "\n";
    }
}
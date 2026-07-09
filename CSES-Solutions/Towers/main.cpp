#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    int n{};
    cin >> n;
    vector<int> sizes(n);
    for (int i = 0; i < n; i++)
        cin >> sizes[i];
    multiset<int> s;
    int tower{1};
    s.insert(sizes[0]);
    for (int i = 1; i < n; i++)
    {
        auto it = s.upper_bound(sizes[i]);
        if (it == s.end())
        {
            tower++;
        }
        else
        {
            s.erase(it);
        }
        s.insert(sizes[i]);
    }
    cout << tower;
}
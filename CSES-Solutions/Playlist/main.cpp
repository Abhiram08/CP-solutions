#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int n{};
    cin >> n;
    vector<int> playlist_id(n);
    set<int> unique_ids;
    for (int i = 0; i < n; i++)
        cin >> playlist_id[i];
    int l = 0, r = 0, size = 0, maxsize = 0;
    while (l < n && r < n && l <= r)
    {
        if (unique_ids.find(playlist_id[r]) == unique_ids.end())
        {
            unique_ids.insert(playlist_id[r]);
            r++;
            size = unique_ids.size();
        }
        else
        {
            unique_ids.erase(playlist_id[l]);
            l++;
        }
        if (size > maxsize)
            maxsize = size;
    }
    cout << maxsize;
}
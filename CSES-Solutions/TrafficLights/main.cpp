#include <iostream>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, n;
    cin >> x >> n;

    set<int> pos;
    multiset<int> lengths;

    pos.insert(0);
    pos.insert(x);
    lengths.insert(x);

    while (n--)
    {
        int p;
        cin >> p;

        auto right = pos.upper_bound(p);
        auto left = prev(right);

        lengths.erase(lengths.find(*right - *left));

        lengths.insert(p - *left);
        lengths.insert(*right - p);

        pos.insert(p);

        cout << *lengths.rbegin() << " ";
    }
}
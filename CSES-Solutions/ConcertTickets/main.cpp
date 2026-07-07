#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
    // Optimise standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    multiset<int> tickets;
    for (int i = 0; i < n; i++)
    {
        int price;
        cin >> price;
        tickets.insert(price); // O(log N) insertion
    }

    for (int i = 0; i < m; i++)
    {
        int max_price;
        cin >> max_price;

        // upper_bound returns an iterator to the first element STRICTLY GREATER than max_price
        auto it = tickets.upper_bound(max_price);

        // If it points to the beginning, no ticket is <= max_price
        if (it == tickets.begin())
        {
            cout << "-1\n";
        }
        else
        {
            // Step back by one iterator to get the largest element <= max_price
            --it;
            cout << *it << "\n";
            tickets.erase(it); // O(1) removal using iterator
        }
    }

    return 0;
}

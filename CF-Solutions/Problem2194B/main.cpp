#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    cin >> t;
    for (long long i = 1; i <= t; i++)
    {
        long long n{}, x{}, y{};
        cin >> n >> x >> y;
        vector<long long> rubles(n + 1);
        long long loss{}, max_loss{}, max_loss_index{};
        for (long long i = 1; i <= n; i++)
        {
            cin >> rubles[i];
            loss = rubles[i] - (rubles[i] / x) * y;
            if (loss > max_loss)
            {
                max_loss = loss;
                max_loss_index = i;
            }
        }
        long long max_amount{rubles[max_loss_index]};
        for (long long i = 1; i <= n; i++)
        {
            if (i == max_loss_index)
                continue;
            else
            {
                max_amount += (rubles[i] / x) * y;
            }
        }
        cout << max_amount << "\n";
    }
    return 0;
}
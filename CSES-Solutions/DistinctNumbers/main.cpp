#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int n{};
    cin >> n;
    vector<int> numbers(n);
    set<int> unique_numbers;
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
        unique_numbers.insert(numbers[i]);
    }
    cout << unique_numbers.size();
}
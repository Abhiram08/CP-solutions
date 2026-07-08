#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n{}, m{}, k{};
    cin >> n >> m >> k;
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int j = 0, i = 0;
    int count{};
    while (i < n && j < m)
    {
        if (a[i] + k < b[j])
            i++;
        else if (a[i] - k > b[j])
            j++;
        else
        {
            count++;
            j++;
            i++;
        }
    }
    cout << count;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n{};
    cin >> n;
    vector<int> arrivals(n);
    vector<int> departures(n);
    for (int i = 0; i < n; i++)
        cin >> arrivals[i] >> departures[i];
    sort(arrivals.begin(), arrivals.end());
    sort(departures.begin(), departures.end());
    int i = 0, j = 0;
    int ppl{0}, maxppl{0};
    while (i < n && j < n)
    {
        if (arrivals[i] < departures[j])
        {
            ppl++;
            i++;
        }
        else if (arrivals[i] == departures[j])
        {
            i++;
            j++;
        }
        else
        {
            j++;
            if (ppl > 0)
                ppl--;
        }
        if (ppl >= maxppl)
            maxppl = ppl;
    }
    cout << maxppl;
}
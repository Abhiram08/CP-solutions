#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct timings
{
    long long start, end;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n{};
    cin >> n;
    vector<timings> movies(n);
    for (timings &t : movies)
        cin >> t.start >> t.end;
    sort(movies.begin(), movies.end(), [](const timings &t1, const timings &t2)
         { return t1.end < t2.end; });
    int count = 1;
    long long lastEnd = movies[0].end;

    for (int i = 1; i < n; i++)
    {
        if (movies[i].start >= lastEnd)
        {
            count++;
            lastEnd = movies[i].end;
        }
    }

    cout << count << "\n";
}
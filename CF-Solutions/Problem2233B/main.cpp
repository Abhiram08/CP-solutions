#include <iostream>

using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        for (int i = 0; i < n; i += 2)
        {
            cout << (i + 2) << ' ' << (i + 1) << ' ' << (i + 1) << ' ' << (i + 2) << ' ';
            cout << (i + 1) << ' ' << (i + 2) << ' ' << (i + 2) << ' ' << (i + 1) << ' ';
        }
    }
    else
    {
        cout << "3 3 2 1 1 2 1 2 2 3 1 3 ";
        for (int i = 3; i < n; i += 2)
        {
            cout << (i + 2) << ' ' << (i + 1) << ' ' << (i + 1) << ' ' << (i + 2) << ' ';
            cout << (i + 1) << ' ' << (i + 2) << ' ' << (i + 2) << ' ' << (i + 1) << ' ';
        }
    }
    cout << '\n';
}

signed main()
{
#ifdef FELIX
    auto _clock_start = chrono::high_resolution_clock::now();
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int tests = 1;
    cin >> tests;
    while (tests--)
    {
        solve();
    }

#ifdef FELIX
    cerr << "Executed in " << chrono::duration_cast<chrono::milliseconds>(chrono::high_resolution_clock::now() - _clock_start).count() << "ms." << endl;
#endif
    return 0;
}
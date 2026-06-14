#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;

    // Impossible cases
    if (n == 1 || n == 3) {
        cout << -1 << "\n";
        return;
    }

    // Even length case
    if (n % 2 == 0) {
        cout << string(n - 2, '3') << "66\n";
    } 
    // Odd length case
    else {
        cout << string(n - 5, '3') << "36366\n";
    }
}

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

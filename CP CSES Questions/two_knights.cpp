#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int k = 1; k <= n; k++) {
        long long totalWays = (1LL * k * k * (k * k - 1)) / 2; // Total ways to place two knights
        long long attackingPairs = 0;

        if (k > 2) {
            attackingPairs = 4 * (k - 1) * (k - 2); // Number of attacking pairs
        }

        long long nonAttackingWays = totalWays - attackingPairs;
        cout << nonAttackingWays << endl;
    }

    cout << endl;
    return 0;
}

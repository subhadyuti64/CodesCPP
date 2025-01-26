#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> C(n);
        for (int i = 0; i < n; ++i) {
            cin >> C[i];
        }

        // Sort the prices in ascending order
        sort(C.begin(), C.end());

        // Compute prefix sums
        vector<long long> prefixSum(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            prefixSum[i + 1] = prefixSum[i] + C[i];
        }

        // Calculate minimum cost for each m
        vector<long long> result(n);
        for (int m = 1; m <= n; ++m) {
            int freeItems = m / (k + 1); // Number of free items we can get
            result[m - 1] = prefixSum[m] - prefixSum[freeItems];
        }

        // Output results for this test case
        for (int i = 0; i < n; ++i) {
            cout << result[i] << " ";
        }
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}

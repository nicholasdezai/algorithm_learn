#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int maxSumOfMNonOverlappingSubarrays(vector<int>& a, int m) {
    int n = a.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, INT_MIN));
    vector<int> sum(n + 1, 0);

    // Calculate the prefix sum
    for (int i = 1; i <= n; i++) {
        sum[i] = sum[i - 1] + a[i - 1];
    }

    dp[0][0] = 0;

    // Dynamic programming to calculate dp array
    for (int j = 1; j <= m; j++) {
        for (int i = 1; i <= n; i++) {
            for (int k = 1; k <= i; k++) {
                if (dp[k - 1][j - 1] != INT_MIN) {
                    dp[i][j] = max(dp[i][j], dp[k - 1][j - 1] + sum[i] - sum[k - 1]);
                }
            }
        }
    }

    // Find the maximum sum for m non-overlapping subarrays
    int result = INT_MIN;
    for (int i = 1; i <= n; i++) {
        result = max(result, dp[i][m]);
    }

    return result;
}

int main() {
    vector<int> a = {1, -2, 3, 5, -1, 2};
    int m = 3;
    int result = maxSumOfMNonOverlappingSubarrays(a, m);
    cout << "The maximum sum of " << m << " non-overlapping subarrays is: " << result << endl;
    return 0;
}

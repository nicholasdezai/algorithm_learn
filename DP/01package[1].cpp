#include <bits/stdc++.h>
using namespace std;

int n,m;
int v[30] = {0};
int p[30] = {0};
int dp[30][30005] = {0};

int main() {
    cin >> n >> m;
    for (int i=1;i<=m;i++) {
        cin >> v[i] >> p[i];
    }
    for (int i=1;i<=m;i++) {
        for (int j=1;j<=n;j++) {
                if (v[i]>j) {
                    dp[i][j] = dp[i-1][j];
                } else {
                    dp[i][j] = max(dp[i-1][j],max(dp[i][j],dp[i-1][j-v[i]]+v[i]*p[i]));
                }
        }
    }
    cout << dp[m][n] << endl;
    // for (int i=1;i<=m;i++) {
    //     for (int j=1;j<=n;j++) {
    //         cout << dp[i][j]<< "\t";
    //     }
    //     cout << endl;
    // }
    return 0;
}
/*
10 5
8 2
4 5
3 5
4 3
2 2
*/
#include <bits/stdc++.h>
using namespace std;

int n;
int dp[25]= {0};
int m[25][25] = {0};
int mine[25] = {0};
int ans[25] = {0};
int main() {
    cin >> n;
    for (int i=1;i<=n;i++) {
        cin >> mine[i];

    } 
    for (int i=1;i<n;i++) {
        for (int j=i+1;j<=n;j++) {
            cin >> m[i][j];
        }
    }
    dp[1] = mine[1];
    ans[1] = 0;
    for (int i=2;i<=n;i++) {
        for (int j=1;j<i;j++) {
            if (m[j][i]) {
                dp[i] = max(dp[i],dp[j]+mine[i]);
                ans[i] = j;
            }
        }
    }
    int mmax = 0;
    int imax = 0;
    for (int i=1;i<=n;i++) {
        if (dp[i]>mmax) {
            mmax = dp[i];
            imax = i;
        }
    }
    stack<int> q;
    q.push(imax);
    while (ans[imax]) {
        q.push(ans[imax]);
        imax = ans[imax];

    }
    while (!q.empty()) {
        cout <<q.top()<<" ";
        q.pop();
    }
    cout << endl << mmax << endl;
    return 0;

}
#include <bits/stdc++.h>
using namespace std;

const int N = 10005;
int x[N],y[N];
int b[N][N],c[N][N];
int n;
int sum = 0;

void LCSLength() {
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n;j++) {
            if (x[i] == y[j]) {
                b[i][j] = 0; // 对角线方向
            } else if (c[i-1][j] > c[i][j-1]) {
                b[i][j] = 1; // 上方向
            } else {
                b[i][j] = 2; // 下方向
            }
        }
    }
}

void LCS(int i,int j){
    if (i==0 || j==0) return;
    if (b[i][j] == 0) {
        LCS(i-1,j-1);
        sum++;
    } else if (b[i][j]==1) {
        LCS(i-1,j);
    } else {
        LCS(i,j-1);
    }
}

int main() {
    cin >> n;
    for (int i=1;i<=n;i++){
        cin >> x[i];
    }
    for (int i=1;i<=n;i++){
        cin >> y[i];
    }
    LCSLength();
    LCS(n,n);
    cout << sum << endl;
    return 0;
}
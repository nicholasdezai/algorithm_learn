//
// Created by 86155 on 2024/3/2.
//
#include <bits/stdc++.h>
using namespace std;

int a[105]={0},n,m,f[1005][1005]={0};
int main(){
    cin >> n >> m;
    for (int i=1;i<=n;i++) {
        cin >> a[i];
    }
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=m;j++) {
            if (j==a[i]) {
                f[i][j]=f[i-1][j]+1;
            } else if (j<a[i]) {
                f[i][j]=f[i-1][j];
            } else {
                f[i][j]=f[i-1][j]+f[i-1][j-a[i]];
            }
        }
    }
    cout << f[n][m]<< endl;
    return 0;
}

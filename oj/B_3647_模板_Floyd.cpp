#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int a[105][105] = {0};
    for (int i=1;i<=m;i++) {
        int x,y,w;
        cin >> x >> y >> w;
        if (a[x][y]==0) {
            a[x][y] = w;
            a[y][x] = w;
        } else {
            a[x][y] = min(a[x][y],w);
            a[y][x] = a[x][y];
        }
    }
    for (int k=1;k<=n;k++) {
        for (int i=1;i<=n;i++) {
            for (int j=i+1;j<=n;j++) {
                if (i!=j && i!=k && k!=j && a[i][k]!=0 && a[k][j]!=0){
                    if (a[i][j]==0) {
                        a[i][j] = a[i][k]+a[k][j];
                        a[j][i] = a[i][j];
                    } else {
                        a[i][j] = min(a[i][j],a[i][k]+a[k][j]);
                        a[j][i] = a[i][j];
                    }
                }
            }
        }
    }
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n;j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
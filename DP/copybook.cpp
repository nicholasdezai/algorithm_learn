#include <bits/stdc++.h>
using namespace std;

int m,k;
int book[505] = {0};
int f[505][505] = {0};
int ans[505] = {0};

int cal(int i,int j,int u) {
    int t = 0;
    for (int r = u+1;r<=j;r++) {
        t += book[r];
    }
    return t + f[i-1][u];
}

int main() {
    cin >> m >> k;
    for (int i=1;i<=m;i++) {
        cin >> book[i];
        f[i][i] += f[i-1][i-1] + book[i];
    }

    for (int r = 2;r<=m;r++) {
        for (int i=2;i<=k;i++) {
            int j = i+r-1;
            f[i][j] = cal(i,j,i+1);
            for (int u=i;u<j;u++) {
                if (cal(i,j,u) <= f[i][j]) {
                    f[i][j] = cal(i,j,u);
                    ans[i] = u;
                }
            }
        }
    }
    for (int i=1;i<=k;i++) {
        cout << ans[i] << endl;

    }
    return 0;
}
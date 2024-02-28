//
// Created by jin on 24-2-27.
//
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    char a[105][105]={0};
    cin >> n >> m;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=m;j++) {
            cin >> a[i][j];
        }
        getchar();
    }
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=m;j++) {
            if (a[i][j]=='*') {
                cout <<'*';
            } else {
                int t=0;
                for (int p=-1;p<=1;p++) {
                    for (int q=-1;q<=1;q++) {
                        if (a[i+p][j+q]=='*') t++;
                    }
                }
                cout << t;
            }
        }
        cout << endl;
    }
    return 0;
}

//
// Created by jin on 24-3-28.
//
#include <bits/stdc++.h>
using namespace std;
int a[10000]={0};
int m,n,p;
int find(int x) {
    if (x!=a[x]) a[x] = find(a[x]);
    return a[x];
}
void un(int x,int y) {
    int r1 = find(x);
    int r2 = find(y);
    a[r1] = r2;
}
int main() {
    cin >> n >> m >> p;
    for (int i=1;i<=n;i++) {
        a[i] = i;
    }
    for (int i=0;i<m;i++) {
        int x,y;
        cin >> x >> y;
        un(x,y);
    }
    for (int i=0;i<p;i++) {
        int x,y;
        cin >> x >> y;
        if (find(x)==find(y)) cout << "Yes" << endl;
        else cout <<"No" << endl;
    }
    return 0;
}
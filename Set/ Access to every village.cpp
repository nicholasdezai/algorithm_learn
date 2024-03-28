#include <bits/stdc++.h>
using namespace std;
int a[1000005]={0};
int find(int x) {
    if (x!=a[x]) a[x] = find(a[x]);
    return a[x];
}
void un(int x,int y) {
    int r1 = find(x);
    int r2 = find(y);
    a[r2] = a[r1];
}
int main() {
    while (true) {
        int n, road;
        cin >> n;
        if (n == 0) return 0;
        cin >> road;
        for (int i=1;i<=n;i++) {
            a[i] = i;
        }
        for (int i=0;i<road;i++) {
            int x,y;
            cin >> x >>y;
            un(x,y);
        }
        int sum=0;
        for (int i=1;i<=n;i++) {
            if (a[i]==i) sum++;
        }
        cout << sum-1 <<endl;
    }

    return 0;
}
//
// Created by 86155 on 2024/3/2.
//
#include <bits/stdc++.h>
using namespace std;
int a[1005][10000]={0};
int len=1;
void add(int x){
    for (int i=0;i<len;i++) {
        a[x][i] += a[x - 1][i] + a[x - 2][i];
        a[x][i+1] = a[x][i] / 10;
        a[x][i] = a[x][i] % 10;

    }
    if (a[x][len]) len++;
}
int main() {
    int n,m;
    cin >> m>>n;
    a[0][0]=1;
    a[1][0]=1;
    for (int i=2;i<n-m+1;i++){
        add(i);
    }
    for (int i=len-1;i>=0;i--) {
        cout << a[n-m][i];
    }
    return 0;
}
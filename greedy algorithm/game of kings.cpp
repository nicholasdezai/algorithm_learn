//
// Created by jin on 24-3-9.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    double a[1005]={0},kl,kr,k;
    cin >> n>> kl>>kr;
    k=kl/kr;
    for (int i=0;i<n;i++) {
        int l,r;
        cin >> l >> r;
        a[i]=1.0*l/r;
    }
    sort(a,a+n);
    int max=0;
    for (int i=0;i<n;i++) {
        k=k*a[i];
        if (k>max) max=k;
    }
    cout << (int)max;
    return 0;
}

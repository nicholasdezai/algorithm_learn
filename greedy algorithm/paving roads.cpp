//
// Created by jin on 24-3-8.
//
#include <bits/stdc++.h>
using namespace std;
int n;
long long a[100000]={0};
long long solve(int l,int r) {
    if (l>=r) return a[l];
    vector<int> lmin;
    int min=INT32_MAX;
    for (int i=l;i<=r;i++) {
        if (a[i]<min) {
            min=a[i];
        }
    }
    for (int i=l;i<=r;i++) {
        a[i]-=min;
        if (!a[i]) {
            lmin.push_back(i);
        }
    }
    long long sum=min;
    for (int i=0;i<lmin.size();i++) {
        if (i==0) sum+=solve(l,lmin[i]-1);
        else sum+= solve(lmin[i-1]+1,lmin[i]-1);
        if (i==lmin.size()-1) sum+= solve(lmin[i]+1,r);
    }
    return sum;
}
int main() {
    cin >> n;
    for (int i=1;i<=n;i++) {
        cin >> a[i];
    }
    cout << solve(1,n);
    return 0;
}

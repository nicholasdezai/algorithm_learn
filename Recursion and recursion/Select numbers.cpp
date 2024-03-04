//
// Created by 86155 on 2024/3/3.
//
#include <bits/stdc++.h>
using namespace std;

int n,ans=0;
struct A{
    int x=0;
    bool is_sel=false;
};
A a[25];
bool is_prime(int x) {
    for (int i=2;i<=sqrt(x);i++) {
        if (x%i==0) {
            return false;
        }
    }
    return true;
}
void select(int sum,int k,int beg){
    if (k==0) {
        if (is_prime(sum)) {
            ans++;
            return ;
        }
    }
    for (int i=beg;i<=n;i++) {
        if (!a[i].is_sel) {
            a[i].is_sel=true;
            sum+=a[i].x;k--;
            select(sum,k,i+1);
            a[i].is_sel=false;
            sum-=a[i].x;k++;
        }
    }
}
int main() {
    int k,sum=0;
    cin >> n>> k;
    for (int i=1;i<=n;i++) {
        cin >> a[i].x;
    }
    select(sum,k,1);
    cout << ans;
    return 0;
}

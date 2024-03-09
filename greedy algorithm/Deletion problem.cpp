//
// Created by jin on 24-3-8.
//
#include <bits/stdc++.h>
using namespace std;
int a[255]={0},num[15]={0};
int main() {
    char c;
    int n=0,k,t;
    while (scanf("%c",&c)) {
        if (c>='0' && c<='9') {
            a[n]=c-'0';
            num[a[n]]++;
            n++;
        } else {
            break;
        }
    }
    scanf("%d",&k);
    if (k>=n) return 0;
    int k1=k,mint=0;

    for (int i=0;i<k;i++) {
        for (int j=0;j<n;j++) {
            if (a[j]>a[j+1]){
                for (int p=j;p<n;p++) {
                    a[p]=a[p+1];
                }
                n--;
                break;
            }
        }
    }
    int l=0;
    int i=0;
    while(a[i]==0 && l<n-1) {// 删去前导 0 ，l<len-1防止10 1 的数据啥也不输出，减去一个‘1 ’输出 0
        l++;//开头的下标加
        i++;//找下一个
    }
    for (int i=l;i<n;i++) {
        cout << a[i];
    }
    return 0;
}

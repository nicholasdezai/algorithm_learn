//
// Created by jin on 24-1-8.
//
#include <bits/stdc++.h>
#define MAX 50000

using namespace std;
int a[10005][10005]={0},m1[50005]={0},m[10005]={},m2[50005]={0};
int main() {
    unordered_set<int> myset;
    int t,n=0,left=MAX,right=0;
    m[0] = 1e9;
    char c;
    while (cin >> t) {
        m[++n] = t;
        char ch = getchar();//通过getchar()来判断最后输入回车符结束
        if(ch == '\n')
            break;
        m1[n] = 1;
        m2[n] = n;
    }
    myset.insert(1);

    for (int i=2;i<=n;i++){
        for (int j=1;j<i;j++) {
            if (m[i] <= m[j]) {
                int t = m1[i];
                m1[i] = max(m1[i],m1[j]+1);
                if (t!=m1[i]) {

                }
            }
        }
    }
    int max=0;
    for (int i=1;i<=n;i++) {
        if (m1[i]> max) max = m1[i];
    }
    cout << max << endl;
    return 0;
}
//
// Created by jin on 24-3-7.
//
#include <bits/stdc++.h>
using namespace std;
vector<int> v;
priority_queue <int,vector<int>,greater<> > q;
int a[20000]={0};
int main() {
    int n,max=-1;
    cin >> n;
    for (int i=0;i<n;i++) {
        int x;
        cin >> x;
        q.push(x);
    }
    int sum=0;
    for (int i=1;i<n;i++) {
        int x1=q.top();
        q.pop();
        int x2=q.top();
        q.pop();
        q.push(x1+x2);
        sum+=x1+x2;
    }
    cout << sum;
    return 0;
}
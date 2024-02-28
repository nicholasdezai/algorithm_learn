//
// Created by 86155 on 2024/2/28.
//
#include <bits/stdc++.h>
using namespace std;
struct Peo{
    string name;
    int towards;
};
Peo peo[100005];
int main() {
    int m,n;
    cin >> n >> m;
    for (int i=0;i<n;i++) {
        int x;string s;
        cin >> x;
        getchar();
        getline(cin,s);
        peo[i].name = s;
        peo[i].towards = x;
    }
    int pos=0;
    for (int i=0;i<m;i++) {
        int a,b;
        cin >> a >> b;
        if ((a+peo[pos].towards)%2) {
            pos += b;
            pos %= n;
        } else {
            pos -= b;
            while (pos<0) pos+=n;
            pos %= n;
        }
    }
    cout << peo[pos].name << endl;
    return 0;
}

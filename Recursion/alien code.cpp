//
// Created by 86155 on 2024/3/1.
//
#include <bits/stdc++.h>
using namespace std;
string dp() {
    char c;
    string s;
    while(scanf("%c",&c) && c!=']') {
        if (c=='[') {
            int re;string s1;
            scanf("%d",&re);
            s1 = dp();
            for (int i=0;i<re;i++) {
                s+=s1;
            }
        } else {
            s+=c;
        }
    }
    return s;
}
int main(){
    char c;
    int x=0;
    while (scanf("%c",&c) && c!='\n') {
        int re; string s;
        if (c=='[') {
            scanf("%d",&re);
            s = dp();
            for (int i=0;i<re;i++) {
                cout << s;
            }
        } else {
            cout << c;
        }
    }
    return 0;
}

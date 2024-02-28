//
// Created by 86155 on 2024/2/28.
//
#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    cin >> a >> b;
    for (int i=a;i<=b;i++) {
        string s;
        int t;
        s = to_string(i);
        if (s.length()%2==0) {
            string s1=s;
            reverse(s1.begin(),s1.end());
            s = s+s1;
            t = stoi(s);
        } else {
            string s1 =
        }
        if (i%2==1) {
        }
    }
    return 0;
}

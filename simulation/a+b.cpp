//
// Created by 86155 on 2024/2/28.
//
#include<bits/stdc++.h>
using namespace std;

int a[5050]={0},b[5050]={0};
int main() {
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    if (s2.length()>s1.length()) {
        string s=s2;
        s2=s1;
        s1=s;
    }
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    for (int i=0;i<s1.length();i++) {
        a[i] = s1[i] - '0';
    }
    for (int i=0;i<s2.length();i++) {
        b[i] = s2[i] - '0';
    }
    for (int i=0;i<s1.length();i++) {
        if(i<s2.length()) {
            a[i+1] += (a[i]+b[i])/10;
            a[i] = (a[i]+b[i])%10;
        }
        a[i] %= 10;
    }
    if (a[s1.length()]!=0) cout << a[s1.length()];
    for (int i=s1.length()-1;i>=0;i--) {
        cout << a[i];
    }
    return 0;
}

//
// Created by 86155 on 2024/3/3.
//
#include <string>
#include <iostream>
using namespace std;
string s;
int main(){
    long long n,i=1;
    cin >> s >> n;
    while (s.length()<n) {
        string s1=s;
        s1.pop_back();
        s+=s[s.length()-1]+s1;
    }
    cout << s[n-1];
    return 0;
}
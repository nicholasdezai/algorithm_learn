//
// Created by 86155 on 2024/2/29.
//
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[2000] ={1,1,2};
    for (int i=3;i<=n;i++) {
        for (int j=0;j<=i/2;j++) {
            a[i]+=a[j];
        }
    }
    cout << a[n] << endl;
    return 0;
}

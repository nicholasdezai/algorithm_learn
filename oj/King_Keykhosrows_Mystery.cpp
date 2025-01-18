#include <bits/stdc++.h>
using namespace std;

int GCD(int a,int b) {
    while (b!=0) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}
int main() {
    int t;
    cin >> t;
    for (int T=0;T<t;T++) {
        int a, b;
        cin >> a >> b;
        int g = GCD(a,b);
        cout << a * b / g << endl;
    }
}
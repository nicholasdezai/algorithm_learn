#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a,b,c;
        cin >> a >> b >> c;
        int mod = n % (a+b+c);
        int div = n / (a+b+c);
        if (mod == 0) {
            cout << 3*div << endl;
        }else if (a >= mod) {
            cout << 3*div +1 << endl;
        } else if (a+b >=mod) {
            cout << 3*div+2<< endl;
        } else {
            cout << 3*div+3 << endl;
        }
    }

    return 0;
}
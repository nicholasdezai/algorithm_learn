#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        size_t n; cin >> n;
        if (n==1) {
            cout << 1 << endl;
            continue;
        }
        size_t sum=1;
        for (int i=0;i<60;i++) {
            if (n/4 > 0) {
                sum*=2;
            }
            n = n / 4;
        }
        cout << sum << endl;
    }
    return 0;
}
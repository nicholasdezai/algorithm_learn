#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int a[200] = {0};
        int n;
        cin >> n;
        for (int i=0;i<n;i++) {
            cin >> a[i];
        }
        bool flag = false;
        for (int i=0;i<n-1;i++) {
            int x = a[i], y = a[i+1];
            if (2*x>y&&2*y>x) {
                flag = true;
                break;
            }
        }
        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
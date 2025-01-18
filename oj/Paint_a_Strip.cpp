#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n==1) {
            cout << 1 << endl;
        } else {
            int l=1;
            int ans = 1;
            while (l < n) {
                l =  (l+1)*2;
                ans++;
            }
            cout << ans << endl;
        }
    }
    return 0;
}
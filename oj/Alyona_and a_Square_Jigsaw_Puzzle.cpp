#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;

        int full = 1;
        int sum = 0;
        int ans =0;
        for (int i=0;i<n;i++) {
            int a;
            cin >> a;
            sum += a;
            while (sum >= full * full) {
                if (sum == full * full) ans++;
                full+=2;
            }
        }
        cout << ans << endl;

    }

    return 0;
}
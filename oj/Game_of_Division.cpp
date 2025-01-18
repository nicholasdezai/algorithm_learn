#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n,k;
        cin >> n >> k;
        vector<int> v;
        for (int i=0;i<n;i++) {
            int a; cin >> a;
            v.push_back(a);
        }
        int ans = false;
        bool ans_flag = false;
        for (int i=0;i<n;i++) {
            bool flag = false;
            for (int j=0;j<n;j++){
                if (i!=j && abs(v[i]-v[j]) % k == 0) {
                    flag = true;
                    break;
                }
            }
            if (!flag) {
                cout << "YES" << endl;
                cout << i+1 << endl;
                ans_flag = true;
                break;
            }
        }
        if (!ans_flag) cout << "NO" << endl;
    }
    return 0;
}
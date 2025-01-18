#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v;
        int ans =0 ;
        for (int i=0;i<n;i++) {
            int a; cin >> a;
            v.push_back(a);
            ans+=a;
        }
        if (ans%n!=0) {
            cout << "NO" << endl;
        } else {
            int mod = ans / n;
            for (int i=1;i<n-1;i++) {
                v[i+1] = v[i-1] - mod +v[i+1];
            }
            if (v[n-1]!=mod) {
                cout << "NO" << endl;
                continue;
            }
            if (n>=2) {
                if (v[n-2]!=mod) {
                    cout << "NO" << endl;
                    continue;
                }
            }
            cout << "YES" << endl;
        }
    }
}
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    getchar();
    for (int T=0;T<t;T++) {
        int n,m,k;
        cin >> n >> m >> k;
        getchar();
        string s;
        getline(cin,s);
        int kk = 0 ,ans =0;
        for (int i=0;i<n;i++) {
            if (s[i] == '0') {
                kk++;
            } else {
                kk = 0;
            }
            if (kk == m) {
                kk = 0;
                ans++;
                if (i+k<n) {
                    i = i + k-1;
                } else {
                    break;
                }
            }
        }
        cout << ans << endl;;
    }
    return 0;
}
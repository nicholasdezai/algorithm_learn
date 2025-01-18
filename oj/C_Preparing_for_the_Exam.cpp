#include <bits/stdc++.h>
using namespace std;
vector<int> a;
vector<int> q;

int main() {
    int t ; cin >> t;
    while (t--) {
        int n ,m,k;
        a.clear();
        q.clear();
        cin >> n >> m >> k;
        getchar();
        if (n-k>1) {
            for (int i=0;i<m;i++) {
                cout << '0';
            }
            string s;
            getline(cin,s);
            getline(cin,s);
        } else if (n==k){
            for (int i=0;i<m;i++) {
                cout << '1';
            }
            string s;
            getline(cin,s);
            getline(cin,s);
        } else {
            int miss = n;
            bool flag = false;
            for (int i=0;i<m;i++) {
                int x; cin >>x;
                a.push_back(x);
            }
            for (int i=0;i<k;i++) {
                int x; cin >>x;
                if (x!=i+1 && !flag) {
                    miss = i+1;
                    flag = true;
                }
            }
            for (int i=0;i<m;i++) {
                if (miss != a[i]) {
                    cout << '0';
                } else {
                    cout << '1';
                }
            }
        }
        cout << endl;
    }
    return 0;
}
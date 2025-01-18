#include<bits/stdc++.h>
using namespace std;

vector<int> a;
vector<int> v;
bool binary_search(int x) {
    // for ()
}
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        a.clear();
        v.clear();
        v.push_back(0);
        bool zero_flag = false;
        for (int i=0;i<n;i++) {
            int x; cin >> x;
            a.push_back(x);
            if (a.size() > 1) {
                a[i] = a[i-1] + x;
            }
            vector<int>::iterator f = find(v.begin(),v.end(),a[i]);
            if (f == v.end()) {
                v.push_back(a[i]);
            }
        }
        for (int i=0;i<a.size()-1;i++) {
            for (int j=i+1;j<a.size();j++){
                vector<int>::iterator f = find(v.begin(),v.end(),a[j]-a[i]);
                if (f == v.end()) {
                    v.push_back(a[j]-a[i]);
                }
            }
        }

        sort(v.begin(),v.end());
        cout << v.size() << endl;
        for (int i=0;i<v.size();i++) {
            cout << v[i] << " ";
        }
        cout << endl;
        


    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
vector<int> v;

int main() {
    int n,ans=0;
    cin >> n;
    if (n <=4 ) {
        cout << n << endl;
    } else {
        v.push_back(2);
        ans = 2;
        while (ans+v.back()+1 <= n) {
            v.push_back(v.back()+1);
            ans += v.back();
        }
        int res = n - ans;
        int i = v.size()-1;
        while (res > 0) {
            v[i]++;
            i--;
            res--;
            if (i < 0) i = v.size() -1;
        }
        int mul = 1;
        for (int i=0;i<v.size();i++) {
            mul *= v[i];
            cout << v[i] << " ";
        }
        cout << endl << mul << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> a;

int main() {
    cin >> n;
    for (int i=0;i<n;i++) {
        int t;
        cin >> t;
        a.push_back(t);
    }
    for (int i=1;i<n;i++) {
        if (a[i-1]>0) {
            a[i] = a[i] + a[i-1];
        }
    }
    int sum = -100000;
    for (int i=0;i<n;i++) {
        if (a[i] > sum ){
            sum = a[i];
        }
    }
    cout << sum << endl;
    return 0;
}
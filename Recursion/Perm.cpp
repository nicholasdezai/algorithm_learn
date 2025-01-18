//
// Created by jin on 24-9-2.
//
#include<bits/stdc++.h>
using namespace std;

void Perm(vector<int> &v, int k, int m) {
    if (k == m) {
        for (int i = 0; i <= m; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    } else {
        for (int i = k; i <= m; i++) {
            swap(v[i], v[k]);
            Perm(v, k + 1, m);
            swap(v[i], v[k]);
        }
    }
}

int main() {
    vector<int> v;
    int m = 5;
    for (int i = 0; i <= m; i++) {
        v.push_back(i);
    }
    Perm(v, 0, m);
    return 0;
}

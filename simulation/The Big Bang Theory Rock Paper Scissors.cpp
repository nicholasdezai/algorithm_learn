//
// Created by 86155 on 2024/2/28.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    int ans[5][5]={{0,0,1,1,0},
                 {1,0,0,1,0},
                 {0,1,0,0,1},
                 {0,0,1,0,1},
                 {1,1,0,0,0}};
    int N,N1,N2;
    cin >> N >> N1 >> N2;
    vector<int> a,b;
    for (int i=0;i<N1;i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i=0;i<N2;i++) {
        int x;
        cin >> x;
        b.push_back(x);
    }
    int aw=0,bw=0;
    for (int i=0;i<N;i++) {
        aw+=ans[a[i%N1]][b[i%N2]];
        bw+=ans[b[i%N2]][a[i%N1]];
    }
    cout << aw << " " << bw<< endl;
    return 0;
}

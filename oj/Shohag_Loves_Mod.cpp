#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    vector<int> v;

    int mod[105][105] = {0};
    cin >> t;

    for (int i=1;i<=100;i++) {
        for (int j=1;j<=min(i,50);j++) {
            mod[i][j] = i % j;
        }
    }

    // for (int T=0;T<t;T++) {
    //     int n;
    //     cin >> n;
        
    // }

    return 0;
}
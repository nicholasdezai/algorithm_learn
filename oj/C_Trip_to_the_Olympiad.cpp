#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int l,r;
        int a=0,b=0,c=0;
        cin >> l >> r;
        for (int i=29;i>=0;i--) {
            if ((l ^ r) >> i & 1) {
                b |= 1 << i;
                a |= (1 << i) - 1;
                break;
            } else {
                b |= l & (1 << i);
                a |= l & (1 << i);
            }
        }
        c = l;
        while (c == a || c == b) {
            c++;
        }
        cout << a << " " << b << " " << c << endl;
    }
    return 0;
}
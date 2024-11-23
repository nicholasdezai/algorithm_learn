//
// Created by 86155 on 2024/2/29.
//
#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll f[25][25][25];

ll F(ll a, ll b, ll c) {
    if (f[a][b][c]>0) return f[a][b][c];
    if (a <= 0 || b <= 0 || c <= 0) {
        return 1;
    }
    if (a > 20 || b > 20 || c > 20) {
        f[20][20][20]=F(20, 20, 20);
        return f[20][20][20];
    }
    if (a < b && b < c) {
        f[a][b][c]=F(a, b, c - 1) + F(a, b - 1, c - 1) - F(a, b - 1, c);
        return f[a][b][c];
    }
    f[a][b][c]=F(a - 1, b, c) + F(a - 1, b - 1, c) + F(a - 1, b, c - 1) - F(a - 1, b - 1, c - 1);
    return f[a][b][c];
}

int main() {
    ll a, b, c;
    cin >> a >> b >> c;
    while (a != -1 || b != -1 || c != -1) {
        ll aa=a,bb=b,cc=c;
        if (a>20) a=21; if (b>20) b=21; if (c>20) c=21;
        if (a<=0) a=0; if (b<=0) b=0; if (c<=0) c=0;
        cout << "w(" << aa << ", " << bb << ", " << cc << ") = " << F(a, b, c) << endl;
        cin >> a >> b >> c;
    }
    return 0;
}

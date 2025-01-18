//
// Created by jin on 24-3-25.
//
#include <bits/stdc++.h>
#define ll long long
#define mod 998244353
using namespace std;
ll T,sum=0;
int len;
struct MEM{
    int len;
    ll i_24=1;
    ll i_25=1;
    ll i_26=1;
};
MEM a[10005];
int Tri(int i,int j) {
    if (j-i<=0) return i;
    if (a[(j-i)/2].len>len) {
        return Tri((j-i)/2,j);
    } else {
        return Tri(i,(j-i)/2);
    }
}
int main() {
    cin >> T;
    for (int i=1;i<=T;i++) {
        cin >> len;
        int k = Tri(0,i);
        a[i].i_24 = a[k].i_24;
        a[i].i_25 = a[k].i_25;
        a[i].i_26 = a[k].i_26;
        a[i].len = len;
        for (int j=k;j<len;j++) {
            a[i].i_24 = (a[i].i_24 * 24) % mod;
            a[i].i_25 = (a[i].i_25 * 25) % mod;
            a[i].i_26 = (a[i].i_26 * 26) % mod;
        }
        ll ans = a[i].i_26 - a[i].i_25*2 + a[i].i_24;
        while (ans<0) ans+=mod;
        cout << ans << endl;
    }
    return 0;
}
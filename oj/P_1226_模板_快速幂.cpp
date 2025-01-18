#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod, a, b;
ll ans;
ll pinpow(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b & 1) res = res * a % mod;
        a = a * a % mod;
        b = b >> 1;
    }
    return res;
}
int main() {
    cin >> a >> b >> mod;
    cout << a << "^" << b << " mod " << mod <<"=" << pinpow(a,b);

    return 0;
}
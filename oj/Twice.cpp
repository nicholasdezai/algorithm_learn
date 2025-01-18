#include <bits/stdc++.h>
using namespace std;
int a[505] = {0};
int n;
int t;

int main() {
    cin >> t;
    for (int T=0;T<t;T++) {
        int s,ans=0;
        cin >> s;
        for (int i=0;i<s;i++) {
            int x;
            cin >> x;
            a[x]++;
            if (a[x]!=0 && a[x]%2==0) ans++;
        }
        cout << ans << endl;
        for (int i=0;i<505;i++) a[i]=0;
    }
    return 0;
}
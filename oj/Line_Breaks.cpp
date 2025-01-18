#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        getchar();
        int sum=0,ans=0;
        for (int i=0;i<n;i++) {
            string s;
            getline(cin,s);

            sum+=s.length();
            if (sum <= m) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
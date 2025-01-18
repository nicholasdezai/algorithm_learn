#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        int a[105]={0},b[105]={0};
        int sum=0;
        cin >> n;

        for (int i=1;i<=n;i++) {
            cin >> a[i]; 
        }
        for (int i=1;i<=n;i++) {
            cin >> b[i];
            if (a[i-1] > b[i]) {
                sum+=a[i-1]-b[i];
            }
        }
        sum+=a[n];
        cout << sum << endl;
    }
    return 0;
}
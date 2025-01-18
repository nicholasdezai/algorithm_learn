#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n;
        int a[27] = {0};
        cin >> n;
        getchar();
        string s;
        getline(cin,s);
        for (int i=0;i<n;i++) {
            a[s[i]-'a']++;
        }
        int max =0;
        int min = 1e9;
        int mmax=0,mmin=0;
        int count = 0;
        for (int i=0;i<26;i++) {
            if (a[i]!=0) {
                count ++ ;
                if (a[i]>max) {
                    max=a[i];
                    mmax=i;
                }
                if (a[i]<=min) {
                    min=a[i];
                    mmin=i;
                } 
            }
        }
        for (int i=0;i<n;i++) {
            if (s[i]-'a'==mmin) {
                s[i] = 'a'+mmax;
                break;
            }
        }
        cout << s << endl;
    }
    return 0;
}
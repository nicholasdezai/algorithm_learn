//
// Created by jin on 24-3-8.
//
#include <bits/stdc++.h>
using namespace std;
vector<int> v;
map<int,int> mp;
int n;
int main() {
    cin >> n;
    for (int i=0;i<n;i++) {
        int x;
        cin >> x;
        if (isfinite(mp[x])) {
            v.push_back(x);
            mp[x]=1;
        }
        mp[x]++;
    }
    sort(v.begin(),v.end());
    int min=INT32_MAX,len=1;
    for (int i=1;i<v.size();i++) {
        if (v[i]-v[i-1]==1 && mp[v[i]]==mp[v[i-1]]) {
            len++;
        } else {
            if (len<min) min =len;
        }
    }
    if (len<min) min =len;
    cout << min ;
    return 0;
}
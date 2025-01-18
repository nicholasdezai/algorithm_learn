#include <bits/stdc++.h>
using namespace std;
vector<int> v;

int bin_sort(int i,int k) {
    int m;
    int ret = -1;
    if ((k-2) % v[i] !=0) {
        return ret;
    } else {
        m = (k-2) / v[i];
    }
    int mid = (i+k) / 2;
    int left = i+1;
    int right = k-1;
    while (left < right) {
        mid =(left + right) /2;
        if (m == v[mid]) {
            ret = v[mid];
            break;
        } else if (m < v[mid]) {
            right = mid;
        } else {
            left = mid;
        }
        if (right - left == 1) {
            if (m != v[right] && m!= v[left]) break;
        } 
    }
    return ret;
}

int main() {
    int t;
    cin >> t;
    for (int T=0;T<t;T++) {
        int k;
        cin >> k;
        v.clear();
        for (int i=0;i<k;i++) {
           int x;
           cin >> x;
           v.push_back(x);
        }
        sort(v.begin(),v.end());
        int ret = -1;
        for (int i=0;i<k;i++) {
            // if (v[i] <= (int)((k-2)/2+0.5)) ret = bin_sort(i,k);
            ret = bin_sort(i,k);
            if (ret != -1) {
                cout << v[i] << " " << ret << endl;
                break;
            }
        }
    }
    return 0;
}
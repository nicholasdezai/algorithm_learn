#include <bits/stdc++.h>
#define ll long long 
using namespace std;
vector<ll> a;
int n,x,y;
ll sum=0;

int binary_search(vector<ll> &a,int x){
    int left = 0,right = 
    while ()

}

int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n >> x >> y;
        sum = 0;
        a.clear();
        for (int i=0;i<n;i++) {
            int x; cin >> x;
            a.push_back(x);
            sum+=x;
        }
        sort(a.begin(),a.end());
        for (int i=0;i<n;i++) {
            int low,high;
            if (a[i] < x) {
                low = binary_search(a,x-a[i]);
            } else {
                break;
            }
            if (a[i] > y) {
                high = binary_search(a,y-a[i]);
            } else {
                break;
            }
        }
        
    }

    return 0;
}
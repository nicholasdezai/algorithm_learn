//
// Created by 86155 on 2023/12/26.
//
#include<bits/stdc++.h>
using namespace std;

double l,r,delta = 1e-5;
int n;
double poly[15];

double polynomial(double x) {
    double ans=0.0;
    for (int i=0;i<=n;i++) {
        ans += poly[i]*pow(x,i);
    }
    return ans;
}

double solution(double left,double right){
    double mid = (left + right) / 2;
    double l_a = polynomial(mid - delta), l_b = polynomial(mid),
            l_c = polynomial(mid + delta);
    if (l_b > l_c && l_b > l_a) {
        return mid;
    } else if (l_a > l_b){
        return solution(left,mid);
    } else {
        return solution(mid,right);
    }
}

int main() {
    cin >> n >> l >> r;
    for (int i=n;i>=0;i--) {
        cin >> poly[i];
    }
    cout << solution(l,r) << endl;
    return 0;
}

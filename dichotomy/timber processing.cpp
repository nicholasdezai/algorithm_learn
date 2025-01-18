//
// Created by 86155 on 2023/12/25.
//
#include <bits/stdc++.h>

using namespace std;

vector<int> v;
int n, k;
long sum;

int solution(int left,int right) {
    int dev=0;
    int mid = (right + left) / 2;
    for (int i=0;i<n;i++) {
        dev += v[i] / mid;
    }
    if (right - left == 1 ) {
        return mid;
    } else if (dev >= k) {
        return solution(mid,right);
    } else {
        return solution(left,mid);
    }
}

int main() {
    cin >> n >> k;
    int max=0;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        v.push_back(t);
        sum += t;
        if (t>max) max = t;
    }
    if (sum / k == 0) {
        cout << 0;
    } else {
        cout << solution(0,2*max);
    }

    return 0;
}

#include<bits/stdc++.h>
#include <cstdio>
#include <ostream>
using namespace std;
typedef long long ll;
ll sum = 0;
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout << std::flush;
    int n;
    cin >> n;
    for (int i=0;i<n;i++) {
        int x;
        cin >> x;
        sum += x;
    }
    cout << sum;
    return 0;

}
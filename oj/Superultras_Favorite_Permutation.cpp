#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n == 3) {
            cout << -1 << endl;
            continue;
        }

        vector<int> result;
        // 偶数部分
        for (int i = 2; i <= n; i += 2) {
            result.push_back(i);
        }
        // 奇数部分
        for (int i = 1; i <= n; i += 2) {
            result.push_back(i);
        }

        for (int x : result) {
            cout << x << " ";
        }
        cout << endl;
    }
}

int main() {
    solve();
    return 0;
}

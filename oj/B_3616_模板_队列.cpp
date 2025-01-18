#include <bits/stdc++.h>
#include <queue>
using namespace std;
queue<int> q;

int main() {
    int t; cin >> t;
    while (t--) {
        int x;
        cin >> x;
        if (x == 1) {
            cin >> x;
            q.push(x);
        } else if (x == 2) {
            if (q.empty()) {
                cout << "ERR_CANNOT_POP" << endl;
            } else {
                q.pop();
            }
        } else if (x == 3) {
            if (q.empty()) {
                cout << "ERR_CANNOT_QUERY" << endl;
            } else {
                cout << q.front() << endl;
            }
        } else {
            cout << q.size() << endl;
        }
    }
    return 0;
}
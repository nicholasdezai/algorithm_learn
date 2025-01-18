#include <bits/stdc++.h>
#include <functional>
#include <queue>
#include <vector>
using namespace std;

priority_queue<int,vector<int>,std::greater<int>> heap;

int main() {
    int t; cin >> t;
    while (t--) {
        int x;
        cin >> x;
        if (x == 1) {
            int y;
            cin >> y;
            heap.push(y);
        } else if (x == 2) {
            std::cout << heap.top() << endl;
        } else if (x == 3) {
            heap.pop();
        }
    }

    return 0;
}
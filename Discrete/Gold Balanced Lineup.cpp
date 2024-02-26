#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

map<vector<int>, int> hsh;
int n, m, ans;

signed main() {
    scanf("%d %d", &n, &m);
    vector<int> v;
    v.resize(m);
    hsh[v] = 0;
    for (int tc = 1; tc <= n; tc++) {
        int d; scanf("%d", &d);
        bool flag = true;
        for (int i = 0; i < m; i++) {
            v[i] += ((d >> i) & 1);
            if (v[i] == 0) flag = false;
        }
        for (int i = 0; i < m; i++) {
            v[i] -= flag;
        }
        if (hsh.count(v)) {
            ans = max(ans, tc - hsh[v]);
        } else {
            hsh[v] = tc;
        }
    }
    printf("%d\n", ans);
    return 0;
}
#include <bits/stdc++.h>
#include <cmath>
#include <vector>
using namespace std;

const int N = 1e8;
int n,m;
vector<int> pri;
bool not_prime[N];
int phi[N];

void pre(int n) {
  phi[1] = 1;
  for (int i = 2; i <= n; i++) {
    if (!not_prime[i]) {
      pri.push_back(i);
      phi[i] = i - 1;
    }
    for (int pri_j : pri) {
      if (i * pri_j > n) break;
      not_prime[i * pri_j] = true;
      if (i % pri_j == 0) {
        phi[i * pri_j] = phi[i] * pri_j;
        break;
      }
      phi[i * pri_j] = phi[i] * phi[pri_j];
    }
  }
}

int main() {
    std::ios::sync_with_stdio(0);
    cin >> n >> m;
    pre(n);
    for (int i=0;i<m;i++) {
        int x;
        cin >> x;
        cout <<pri[x-1] << '\n';
    }


    return 0;
}
#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <stack>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    stack<int> st;
    int n;
    cin >> n;
    getchar();
    for (int i = 0; i < n; i++) {
      string s;
      cin >> s;
      if (strcmp(s.c_str(), "push")) {
      cout << s << endl;
        int a;
        cin >> a;
        getchar();
        st.push(a);
      } else if (strcmp(s.c_str(), "query")) {
        if (st.empty()) {
          cout << "Anguei!" << endl;
        } else {
          cout << st.top() << endl;
        }
      } else if (strcmp(s.c_str(), "pop")) {
        if (st.empty()) {
          cout << "Empty" << endl;
        } else {
          int p = st.top();
          st.pop();
          cout << p << endl;
        }
      } else if (strcmp(s.c_str(), "size")) {
        cout << st.size() << endl;
      }
    }
  }
  return 0;
}
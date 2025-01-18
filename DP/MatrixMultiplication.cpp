#include <bits/stdc++.h>
using namespace std;
struct MatrixMultiplication
{
    /* data */
    int row;
    int col;
};

int main() {
    int n;
    cin >> n;
    vector<MatrixMultiplication> mat;
    vector<int> p;
    vector<vector<int>> m(10,vector<int>(10,0));

 
    for (int i=0;i<n;i++) {
        MatrixMultiplication m;
        cin >> m.row >> m.col;
        mat.push_back(m);
        p.push_back(m.row);
        if (i==n-1) p.push_back(m.col);
    }

    for (int r=2;r<=n;r++) {
        for (int i=1;i<=n-r+1;i++) {
            int j = i+r-1;
            m[i][j] = m[i][i] + m[i+1][j] + p[i-1]*p[i]*p[j];
            for (int k=i+1;k<j;k++) {
                if (m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j] < m[i][j]) m[i][j]=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
            }
        }
    }
    for (int i=1;i<=n;i++ ) {
        for (int j=1;j<=n;j++) {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;

}

//
// Created by jin on 23-12-28.
//
#include<bits/stdc++.h>

using namespace std;

struct Point {
    Point(int x_ = 0, int y_ = 0) : x(x_), y(y_) {}

    int x;
    int y;
};

int main() {
    int m, n, x, y;
    cin >> n >> m >> x >> y;
    int horse[405][405] = {0};
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            horse[i][j] = -1;
        }
    }
    horse[x][y] = 0;
    queue<Point> p;
    Point p0(x, y), move[8] = {{-2, -1},
                               {-1, -2},
                               {1,  -2},
                               {2,  -1},
                               {2,  1},
                               {1,  2},
                               {-1, 2},
                               {-2, 1}};

    p.push(p0);
    while (!p.empty()) {
        Point point = p.front();
        p.pop();
        for (int i = 0; i < 8; i++) {
            Point pre(point.x + move[i].x, point.y + move[i].y);
            if (pre.x > 0 && pre.y > 0 && pre.x <= n && pre.y <= m && horse[pre.x][pre.y] == -1) {
                p.push(pre);
                horse[pre.x][pre.y] = horse[point.x][point.y] + 1;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << horse[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

//
// Created by 86155 on 2024/2/28.
//
#include <bits/stdc++.h>

using namespace std;
struct Head {
    int x;
    int y;
};
Head head[4] = {{0, 1},
                {1, 0},
                {0, -1},
                {-1, 0}};
char mp[12][12] = {0};
void walk(int &x,int &y,int &h) {
    int nx = x + head[h].x, ny = y + head[h].y;
    if (nx > 0 && ny > 0 && nx < 11 && ny < 11) {
        if (mp[nx][ny] == '*') {
            h = (h + 1) % 4;
        } else {
            x = nx;
            y = ny;
        }
    } else {
        h = (h + 1) % 4;
    }
}
int main() {
    int cx, cy, fx, fy, ch = 3, fh = 3;
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cin >> mp[i][j];
            if (mp[i][j] == 'C') {
                cx = i;
                cy = j;
            }
            if (mp[i][j] == 'F') {
                fx = i;
                fy = j;
            }
        }
        getchar();
    }
    int t = 0,flag=0,fx0=fx,fy0=fy,cx0=cx,cy0=cy;
    while (fx != cx || fy != cy ) {
        t++;
        walk(fx,fy,fh);
        walk(cx,cy,ch);
        if (t==INT16_MAX) break;
    }
    if (t==INT16_MAX) {
        cout << 0 << endl;
    }else {
        cout << t << endl;
    }
    return 0;
}
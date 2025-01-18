#include <bits/stdc++.h>
using namespace std;

struct Avilable {
    Avilable(int X,int Y) :x(X),y(Y) {}
    int x;
    int y;
};

Avilable reach(char dir,Avilable now) {
    if (dir == 'N') {
        return Avilable(now.x,now.y+1);
    } else if (dir == 'E') {
        return Avilable(now.x+1,now.y);
    } else if (dir == 'S') {
        return Avilable(now.x,now.y-1);
    } else {
        return Avilable(now.x-1,now.y);
    }
}

bool find(Avilable now,Avilable end) {
    return now.x == end.x && now.y==end.y;
}

int main() {
    int t;
    cin >> t;
    for (int T=0;T<t;T++) {
        int n,a,b;
        Avilable end(a,b);
        bool flag=false,flag1=false;
        cin >> n >> a >> b;
        vector<Avilable> avilable;
        string s;
        getchar();
        getline(cin,s);

        Avilable now(0,0);
        if (end.x==0&& end.y==0) {
            cout << "YES" << endl;
        } else {
            for (int j=0;j<1e5;j++) {
                Avilable minpoint = now;
                for (int i=0;i<n;i++) {
                    avilable.push_back(reach(s[i],now));
                    now = avilable.back();
                    if (now.x < minpoint.x || now.y < minpoint.y) {
                        minpoint = now;
                    }
                    if (find(avilable.back(),end)) {
                        flag == true;
                        break;
                    }
                }
                if (abs(minpoint.x) > abs(end.x) && abs(minpoint.y) > abs(end.y)) break;
            }

            if (!flag) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}
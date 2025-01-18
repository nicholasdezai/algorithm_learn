#include <bits/stdc++.h>
using namespace std;
struct Sheet{
    int up;
    int down;
};

bool sort_great(const Sheet& a,const Sheet& b) {
    return a.down < b.down;
}
bool sort_less(const Sheet& a,const Sheet& b) {
    return a.up > b.up;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        Sheet sheet[5005];
        vector<Sheet> great;
        vector<Sheet> less;
        for (int i=0;i<n;i++) {
            cin >> sheet[i].up;
        }
        for (int i=0;i<n;i++) {
            cin >> sheet[i].down;
            if (sheet[i].up > sheet[i].down) {
                great.push_back(sheet[i]);
            } else {
                less.push_back(sheet[i]);
            }
        }
        if (great.empty()) {
            sort(less.begin(),less.end(),sort_less);
            int ans=less[0].up;
            for (int i=0;i<n;i++) {
                ans+=less[i].down;
            }
            cout << ans <<endl;
            continue;
        }
        if (less.empty()) {
            sort(great.begin(),great.end(),sort_great);
            int ans=great[n-1].down;
            for (int i=0;i<n;i++) {
                ans+=great[i].up;
            }
            cout << ans << endl;
            continue;
        }
        sort(great.begin(),great.end(),sort_great);
        sort(less.begin(),less.end(),sort_less);
        int ans=0;
        for (int i=0;i<great.size();i++){
            ans+=great[i].up;
        }
        if(great[great.size()-1].down > less[0].up){
            ans+=great[great.size()-1].down;
        } else {
            ans+= less[0].up;
        }
        for (int i=0;i<less.size();i++){
            ans+=less[i].down;
        }
        cout << ans << endl;
    }
    return 0;
}
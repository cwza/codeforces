#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int t, sx, sy, ex, ey;
string s;

int dist(int x, int y) {
    return abs(x-ex) + abs(y-ey);
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> t >> sx >> sy >> ex >> ey;
    cin >> s;
    if(sx==ex && sy==ey) {
        cout << 0;
        return 0;
    }
    int ans = 0;
    for(char ch : s) {
        if(ch == 'N') {
            if(dist(sx, sy+1) < dist(sx, sy)) sy++;
        } 
        if(ch == 'S') {
            if(dist(sx, sy-1) < dist(sx, sy)) sy--;
        }
        if(ch == 'E') {
            if(dist(sx+1, sy) < dist(sx, sy)) sx++;
        }
        if(ch == 'W') {
            if(dist(sx-1, sy) < dist(sx, sy)) sx--;
        }
        ans++;
        if(sx==ex && sy==ey) {
            cout << ans;
            return 0;
        }
    }
    cout << -1;
    // int diffx = ex - sx;
    // int diffy = ey - sy;
    // int eCount = 0, wCount = 0, sCount = 0, nCount = 0;
    // if(diffx < 0) wCount = abs(diffx);
    // if(diffx > 0) eCount = abs(diffx);
    // if(diffy < 0) sCount = abs(diffy);
    // if(diffy > 0) nCount = abs(diffy);
    // if(wCount==0 && eCount==0 && sCount==0 && nCount==0) {
    //     cout << 0;
    //     return 0;
    // }
    // for(int i = 0; i < s.size(); ++i) {
    //     if(s[i] == 'W') wCount--;
    //     else if(s[i] == 'E') eCount--;
    //     else if(s[i] == 'S') sCount--;
    //     else if(s[i] == 'N') nCount--;
    //     if(wCount<=0 && eCount<=0 && sCount<=0 && nCount<=0) {
    //         cout << i+1;
    //         return 0;
    //     }
    // }
    // cout << -1;
}
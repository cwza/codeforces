#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int n, m;
const int maxN = 50;
string grid[maxN];
vector<ar<int, 2>> blacks;

bool check(int x1, int y1, int x2, int y2) {
    int diffx = abs(x1-x2);
    int diffy = abs(y1-y2);
    int curx = x1, cury = y1;
    while(curx<=n && curx<=x1+diffx && grid[curx][cury]=='B') curx++;
    curx--;
    while(cury<=m && cury<=y1+diffy && grid[curx][cury]=='B') cury++;
    cury--;
    if(curx==x2 && cury==y2) return true;
    curx = x1, cury = y1;
    while(cury<=m && cury<=y1+diffy && grid[curx][cury]=='B') cury++;
    cury--;
    while(curx<=n && curx<=x1+diffx && grid[curx][cury]=='B') curx++;
    curx--;
    if(curx==x2 && cury==y2) return true;

    curx = x1, cury = y1;
    while(curx<=n && curx<=x1+diffx && grid[curx][cury]=='B') curx++;
    curx--;
    while(cury>=0 && cury>=y1-diffy && grid[curx][cury]=='B') cury--;
    cury++;
    if(curx==x2 && cury==y2) return true;
    curx = x1, cury = y1;
    while(cury>=0 && cury>=y1-diffy && grid[curx][cury]=='B') cury--;
    cury++;
    while(curx<=n && curx<=x1+diffx && grid[curx][cury]=='B') curx++;
    curx--;
    if(curx==x2 && cury==y2) return true;

    curx = x1, cury = y1;
    while(curx>=0 && curx>=x1-diffx && grid[curx][cury]=='B') curx--;
    curx++;
    while(cury<=m && cury<=y1+diffy && grid[curx][cury]=='B') cury++;;
    cury--;
    if(curx==x2 && cury==y2) return true;
    curx = x1, cury = y1;
    while(cury<=m && cury<=y1+diffy && grid[curx][cury]=='B') cury++;;
    cury--;
    while(curx>=0 && curx>=x1-diffx && grid[curx][cury]=='B') curx--;
    curx++;
    if(curx==x2 && cury==y2) return true;

    curx = x1, cury = y1;
    while(curx>=0 && curx>=x1-diffx && grid[curx][cury]=='B') curx--;
    curx++;
    while(cury>=0 && cury>=y1-diffy && grid[curx][cury]=='B') cury--;
    cury++;
    if(curx==x2 && cury==y2) return true;
    curx = x1, cury = y1;
    while(cury>=0 && cury>=y1-diffy && grid[curx][cury]=='B') cury--;
    cury++;
    while(curx>=0 && curx>=x1-diffx && grid[curx][cury]=='B') curx--;
    curx++;
    if(curx==x2 && cury==y2) return true;

    return false;
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n >> m;
    for(int i = 0; i < n; ++i) {
        cin >> grid[i];
        for(int j = 0; j < m; ++j) {
            if(grid[i][j]=='B') {
                blacks.push_back({i, j});
            }
        }
    }

    for(int i = 0; i < blacks.size(); ++i) {
        for(int j = i+1; j < blacks.size(); ++j) {
            auto [x1, y1] = blacks[i];
            auto [x2, y2] = blacks[j];
            if(!check(x1, y1, x2, y2)) {
                // cout << x1 << " " << y1 << " " << x2 << " " << y2 << "\n";
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m;
const int maxN = 50, maxM = maxN;
string grid[maxN];
bool visited[maxN][maxM], acting[maxN][maxM];

bool isValid(int x, int y, char ch) {
    if(x>=0 && x<n && y>=0 && y<m && grid[x][y]==ch) return true;
    return false;
}

void dfs(int x, int y, char ch, int px, int py) {
    visited[x][y] = true;
    acting[x][y] = true;
    int xs[] = {0, 0, 1, -1};
    int ys[] = {1, -1, 0, 0};
    for(int i = 0; i < 4; ++i) {
        int nextX = x+xs[i], nextY = y+ys[i];
        if(!isValid(nextX, nextY, ch) || (nextX==px && nextY==py)) continue;
        if(acting[nextX][nextY]) {
            cout << "Yes";
            exit(0);
        }
        if(!visited[nextX][nextY]) {
            dfs(nextX, nextY, ch, x, y);
        }
    }
    acting[x][y] = false;
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n >> m;
    for(int i = 0; i < n; ++i) cin >> grid[i];

    for(int x = 0; x < n; ++x) {
        for(int y = 0; y < m; ++y) {
            if(!visited[x][y]) {
                dfs(x, y, grid[x][y], -1, -1);
            }
        }
    }
    cout << "No";
}
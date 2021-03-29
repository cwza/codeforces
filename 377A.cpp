#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
Start BFS or DFS from any free cell. As the maze is connected, this search will visit all s free cells. But we can stop the search when it visits s - k free cells. It's obvious that these s - k cells are connected to each other. Remaining k cells can be transformed into the walls.

Solutions which every move transform the cell which has the minimal number of neighbours passed pretests. However, it's wrong. Here is the counter-test:
....
.#..
..##
..##
Top-left cell has no more neighbours than any other cell but we cannot transform it into the wall.
*/

int n, m, k;
const int maxN = 500, maxM = maxN;
string grid[maxN];
bool visited[maxN][maxM];
int maxStep;

bool isValid(int i, int j) {
    if(i>=0 && i<n && j>=0 && j<m && grid[i][j]=='.') return true;
    return false;
}

void dfs(int i, int j) {
    visited[i][j] = true;
    maxStep--;
    int xs[] = {0, 0, 1, -1};
    int ys[] = {1, -1, 0, 0};
    for(int k = 0; k < 4; ++k) {
        int nextI = i + xs[k];
        int nextJ = j + ys[k];
        if(maxStep>0 && isValid(nextI, nextJ) && !visited[nextI][nextJ]) {
            dfs(nextI, nextJ);
        }
    }
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n >> m >> k;
    int cnt = 0;
    for(int i = 0; i < n; ++i) {
        cin >> grid[i];
        for(int j = 0; j < m; ++j) {
            if(grid[i][j]=='.') cnt++;
        }
    }
    maxStep = cnt - k;

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            if(maxStep>0 && grid[i][j]=='.' && !visited[i][j]) {
                dfs(i, j);
            }
        }
    }
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            if(!visited[i][j] && grid[i][j]=='.') {
                grid[i][j] = 'X';
            }
        }
    }
    for(int i = 0; i < n; ++i) cout << grid[i] << "\n";
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
Notice that the existence of a snow drift at the point (x, y) implies that "if I'm on the horizontal line at y then I am certainly able to get to the vertical line at x, and vice versa". Thus, the snow drifts are the edges of a bipartite graph between x- and y- coordinates. The number of snow drifts that need to be added to make this (as well as the original) graph connected is the number of its connected components reduced by one.
*/

struct Point {
    int x, y;
};

int n;
const int maxN = 100;
Point points[maxN];
bool visited[maxN];

void dfs(int u) {
    visited[u] = true;
    for(int v = 0; v < n; ++v) {
        if(!visited[v] && (points[v].x==points[u].x || points[v].y==points[u].y)) {
            dfs(v);
        }
    }
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n;
    for(int i = 0, x, y; i < n; ++i) {
        cin >> x >> y;
        points[i].x = x;
        points[i].y = y;
    }

    int nGroup = 0;
    for(int u = 0; u < n; ++u) {
        if(!visited[u]) {
            dfs(u);
            nGroup++;
        }
    }
    cout << nGroup-1;
}
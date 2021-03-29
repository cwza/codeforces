#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
const int maxN = 2000;
vector<int> adj[maxN];
bool visited[maxN];
int d[maxN];

void dfs(int u, int p) {
    visited[u] = true;
    for(int v: adj[u]) {
        if(v!=p && !visited[v]) {
            dfs(v, u);
            d[u] = max(d[u], d[v]);
        }
    }
    d[u]++;
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n;
    vector<int> roots;
    for(int i = 0, p; i < n; ++i) {
        cin >> p;
        if(p==-1) {
            roots.push_back(i);
            continue;
        }
        p--;
        adj[p].push_back(i);
        adj[i].push_back(p);
    }

    for(int i : roots) {
        if(!visited[i]) {
            dfs(i, -1);
        }
    }
    int ans = 0;
    for(int i = 0; i < n; ++i) ans = max(ans, d[i]);
    cout << ans;
}
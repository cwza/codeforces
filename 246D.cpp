#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int n, m;
const int maxN = 1e5, maxC = 1e5;
vector<int> adj[maxN];
int c[maxN];
bool vis[maxN];
set<int> q[maxC];

void dfs(int u) {
    vis[u] = true;
    for(int v : adj[u]) {
        if(c[v]!=c[u]) q[c[u]].insert(c[v]);
        if(!vis[v]) {
            dfs(v);
        }
    } 
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n >> m;
    for(int i = 0, a; i < n; ++i) {
        cin >> a; a--;
        c[i] = a;
    }
    for(int i = 0, u, v; i < m; ++i) {
        cin >> u >> v; u--, v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int u = 0; u < n; ++u) {
        if(!vis[u]) {
            dfs(u);
        }
    }
    int ansV = 0;
    int ans = -1;
    for(int i = 0; i < maxC; ++i) {
        if(q[i].size() > ansV) {
            ansV = q[i].size();
            ans = i;
        }
    }
    if(ans==-1) cout << *min_element(c, c+n)+1;
    else cout << ans + 1;
}
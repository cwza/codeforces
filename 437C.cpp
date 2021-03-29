#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
The best way to delete all n nodes is deleting them in decreasing order of their value.
*/

int n, m;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n >> m;
    int cost[n];
    array<int, 2> nodes[n];
    set<int> adj[n];
    for(int i = 0; i < n; ++i) {
        cin >> cost[i];
        nodes[i] = {cost[i], i};
    }
    sort(nodes, nodes+n, greater<array<int, 2>>());
    for(int i = 0, u, v; i < m; ++i) {
        cin >> u >> v; u--, v--;
        adj[u].insert(v);
        adj[v].insert(u);
    }

    ll ans = 0;
    for(auto[_, u] : nodes) {
        for(int v : adj[u]) {
            ans += cost[v];
            adj[v].erase(adj[v].find(u));
        }
        adj[u].clear();
    }
    cout << ans;
}
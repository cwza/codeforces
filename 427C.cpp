#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

/*
Strongly Connected Component
*/

int n, m;
const int maxN = 1e5, maxM = 3e5, M = 1e9+7;
int cost[maxN];
vector<int> adj[maxN], radj[maxN];
bool visited[maxN];
vector<int> s;
vector<ar<int, 2>> groups; // (minVal, cnt)

void dfs1(int u) {
    visited[u] = true;
    for(int v : adj[u]) {
        if(!visited[v]) {
            dfs1(v);
        }
    }
    s.push_back(u);
}

void dfs2(int u) {
    visited[u] = true;
    if(cost[u] == groups.back()[0]) {
        groups.back()[1]++;
    }
    if(cost[u] < groups.back()[0]) {
        groups.back()[0] = cost[u];
        groups.back()[1] = 1;
    }
    for(int v : radj[u]) {
        if(!visited[v]) {
            dfs2(v);
        }
    }
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> cost[i];
    cin >> m;
    for(int i = 0, u, v; i < m; ++i) {
        cin >> u >> v; u--, v--;
        adj[u].push_back(v);
        radj[v].push_back(u);
    }
    for(int u = 0; u < n; ++u) {
        if(!visited[u]) {
            dfs1(u);
        }
    }
    fill(visited, visited+n, false);
    for(int i = s.size()-1; i >= 0; --i) {
        int u = s[i];
        if(!visited[u]) {
            groups.push_back({(int)1e9+1, 0});
            dfs2(u);
        }
    }
    ll ans1 = 0, ans2 = 1;
    for(auto [val, cnt] : groups) {
        ans1 += val;
        ans2 = (ans2 * cnt) % M;
    }
    cout << ans1 << " " << ans2;
}
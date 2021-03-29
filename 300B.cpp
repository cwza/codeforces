#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m;
const int maxN = 48;
vector<int> adj[maxN+1];
bool visited[maxN+1];
vector<int> groups[maxN+1];

void dfs(int u, int ngroup) {
    visited[u] = true;
    groups[ngroup].push_back(u);
    for(int v : adj[u]) {
        if(!visited[v])
            dfs(v, ngroup);
    }
}

bool cmp(vector<int> &a, vector<int> &b) {
    return a.size() > b.size();
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n >> m;
    for(int i = 1, a, b; i <= m; ++i) {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int ngroup = 0;
    for(int u = 1; u <= n; ++u) {
        if(!visited[u]) {
            dfs(u, ngroup);
            ngroup++;
        }
    }
    sort(groups, groups+ngroup, cmp);

    vector<vector<int>> ans(n/3);
    set<array<int, 2>> s;
    for(int i = 0; i < n/3; ++i) s.insert({3, i});
    for(int i = 0; i < ngroup; ++i) {
        auto iter = s.lower_bound({(int)groups[i].size()});
        if(iter==s.end()) {
            cout << -1;
            return 0;
        }
        for(int a : groups[i]) ans[(*iter)[1]].push_back(a);
        s.insert({(*iter)[0]-(int)groups[i].size(), (*iter)[1]});
        s.erase(iter);
    }
    for(auto group : ans) {
        for(int a : group) {
            cout << a << " ";
        }
        cout << "\n";
    }
}
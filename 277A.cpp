#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


// int n, m;
// const int maxN = 100, maxM = 100;
// vector<int> adj[maxN+maxM+1];
// bool visited[maxN+maxM+1];

// void dfs(int u) {
//     visited[u] = true;
//     for(int v : adj[u]) {
//         if(!visited[v])
//             dfs(v);
//     }
// }

// int main() {
//     ios::sync_with_stdio(0); 
//     cin.tie(0);
//     // freopen("input.txt", "r", stdin); 
//     // freopen("output.txt", "w", stdout);

//     cin >> n >> m;
//     int count = 0;
//     for(int i = 1, k; i <= n; ++i) {
//         cin >> k;
//         if(k==0) count++;
//         while(k--) {
//             int a;
//             cin >> a;
//             adj[i].push_back(n+a);
//             adj[n+a].push_back(i);
//         }
//     }

//     // Special Case
//     if(count == n) {
//         cout << n;
//         return 0;
//     }

//     int ans = 0;
//     for(int i = 1; i <= n+m; ++i) {
//         if(!visited[i] && i<=n) {
//             ans++;
//             dfs(i);
//         }
//     }
//     cout << ans-1;
// }

int n, m;
const int maxN = 100, maxM = 100;
vector<int> group[maxM+1]; // language: [employee, ...]

int link[maxN+1];
int sz[maxN+1];
int find(int x) {
    while(x!=link[x]) x = link[x];
    return x;
}
bool unite(int x, int y) {
    x = find(x);
    y = find(y);
    if(x==y) return false;
    if(sz[x]>sz[y]) swap(x, y);
    link[x] = y;
    sz[y] += sz[x];
    return true;
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n >> m;
    int count = 0;
    for(int i = 1, k; i <= n; ++i) {
        cin >> k;
        if(k==0) count++;
        while(k--) {
            int a;
            cin >> a;
            group[a].push_back(i);
        }
    }
    // Special Case
    if(count == n) {
        cout << n;
        return 0;
    }

    iota(link+1, link+n+1, 1);
    fill(sz+1, sz+n+1, 1);
    int ans = n;
    for(int i = 1; i <= m; ++i) {
        if(group[i].size()<2) continue;
        for(int j = 1; j < group[i].size(); ++j) {
            if(unite(group[i][0], group[i][j])) ans--;
        }
    }
    cout << ans-1;
}
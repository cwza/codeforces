#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
const int maxN = 100;
vector<array<int, 2>> inp;
bool visited[maxN+1];

void dfs(int u) {
    visited[u] = true;
    for(int v = 1; v < inp.size(); ++v) {
        if((inp[v][0]<inp[u][0]&&inp[u][0]<inp[v][1]) || (inp[v][0]<inp[u][1]&&inp[u][1]<inp[v][1])) {
            if(!visited[v]) {
                dfs(v);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n;
    inp.push_back({-1, -1});
    for(int i = 1; i <= n; ++i) {
        int qt;
        cin >> qt;
        if(qt==1) {
            int x, y;
            cin >> x >> y;
            inp.push_back({x, y});
        } else {
            int a, b;
            cin >> a >> b;
            fill(visited, visited+maxN+1, false);
            dfs(a);
            if(visited[b]) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}
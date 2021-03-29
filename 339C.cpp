#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> wss;
string s;
int m;
bool memo[11][11][1001];
bool visited[11][11][1001];
array<int, 4> parent[11][11][1001];

void dfs(int diff, int prev, int k) {
    if(visited[diff][prev][k]) return;
    if(k==0) {
        memo[diff][prev][k] = true;
        return;
    }
    memo[diff][prev][k] = false;
    for(int w : wss) {
        if(w>diff && w!=prev) {
            dfs(w-diff, w, k-1);
            memo[diff][prev][k] |= memo[w-diff][w][k-1];
            if(memo[w-diff][w][k-1]) parent[diff][prev][k] = {w-diff, w, k-1, w};
        }
    }
    visited[diff][prev][k] = true;
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> s;
    cin >> m;
    for(int i = 0; i < 10; ++i) {
        if(s[i]=='1') wss.push_back(i+1);
    }

    dfs(0, 0, m);
    if(!memo[0][0][m]) {
        cout << "NO";
        return 0;
    }
    cout << "YES\n";   
    array<int, 3> cur = {0, 0, m};
    vector<int> ans;
    while(cur!=array<int, 3>{0, 0, 0}) {
        auto p = parent[cur[0]][cur[1]][cur[2]];
        ans.push_back(p[3]);
        cur[0] = p[0], cur[1] = p[1], cur[2] = p[2];
    }
    for(int i = 0; i < ans.size()-1; ++i) cout << ans[i] << " ";
}
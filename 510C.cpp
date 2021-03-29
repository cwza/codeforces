#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
Topological Sort
*/

int n;
vector<int> adj[26];
bool visited[26], acting[26];
bool visited2[26];
vector<int> rTopo;

void dfs(int u) {
    visited[u] = true;
    acting[u] = true;
    for(int v : adj[u]) {
        if(acting[v]) {
            cout << "Impossible";
            exit(0);
        }
        if(!visited[v]) {
            dfs(v);
        }
    }
    rTopo.push_back(u);
    acting[u] = false;
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n;
    if(n==1) {
        cout << "abcdefghijklmnopqrstuvwxyz";
        return 0;
    }
    string s1, s2;
    cin >> s1;
    for(int i = 0; i < n-1; ++i) {
        cin >> s2;
        int j = 0, m = min(s1.size(), s2.size());
        while(j<m && s1[j]==s2[j]) j++;
        if(j==m && s1.size()>s2.size()) {
            cout << "Impossible";
            return 0;
        } else if(j==m) {
            s1 = s2;
        } else {
            adj[s1[j]-'a'].push_back(s2[j]-'a');
            s1 = s2;
        }
    }

    for(int u = 0; u < 26; ++u) {
        if(!visited[u]) {
            dfs(u);
        }
    }
    for(int i = rTopo.size()-1; i >= 0; --i) {
        cout << char(rTopo[i]+'a');
    }
}
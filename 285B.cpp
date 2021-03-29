#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, s, t;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n >> s >> t; s--, t--;
    int ps[n];
    for(int i = 0; i < n; ++i) {
        cin >> ps[i];
        ps[i]--;
    }

    bool visited[n]; fill(visited, visited+n, false);
    int ans = 0;
    int cur = s;
    while(true) {
        if(cur==t) {
            cout << ans;
            return 0;
        }
        if(visited[cur]) {
            cout << -1;
            return 0;
        }
        visited[cur] = true;
        ans++;
        cur = ps[cur];
    }
}
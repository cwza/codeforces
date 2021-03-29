#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n >> m;
    int inp[n][m];
    for(int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        for(int j = 0; j < m; ++j) {
            inp[i][j] = s[j]-'1';
        }
    }

    int ans[n]; fill(ans, ans+n, 0);
    for(int j = 0; j < m; ++j) {
        int maxV = 0;
        for(int i = 0; i < n; ++i) {
            maxV = max(maxV, inp[i][j]);
        }
        for(int i = 0; i < n; ++i) {
            if(inp[i][j]==maxV) ans[i] = 1;
        }
    }
    cout << accumulate(ans, ans+n, 0);
}
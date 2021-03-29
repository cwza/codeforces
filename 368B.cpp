#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m;
const int maxN = 1e5, maxA = 1e5;
bool visited[maxA+1];
int dp[maxN+1];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n >> m;
    for(int i = 1; i <= n; ++i) cin >> dp[i];

    visited[dp[n]] = true;
    dp[n] = 1;
    for(int i = n-1; i >= 0; --i) {
        if(visited[dp[i]]) {
            dp[i] = dp[i+1];
        } else {
            visited[dp[i]] = true;
            dp[i] = dp[i+1] + 1;
        }
    }

    while(m--) {
        int a;
        cin >> a;
        cout << dp[a] << "\n";
    }
}
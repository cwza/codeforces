#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
dp[i] = max(dp[i-x]+1) for i in [a, b, c]
dp[0] = 0
initialize dp[.] = -1
*/

int n, a, b, c;
const int maxN = 4000;
int dp[maxN+1];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n >> a >> b >> c;
    fill(dp, dp+n, -1); dp[0] = 0;
    int xs[] = {a, b, c};
    for(int i = 1; i <= n; ++i) {
        for(int x : xs) {
            if(i-x < 0 || dp[i-x]==-1) continue;
            dp[i] = max(dp[i], dp[i-x] + 1);
        }
    }
    cout << dp[n];
}
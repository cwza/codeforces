#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
dp[n][k] = max(dp[n-1][k], dp[n-m][k-1]+arr[n-m+1]+..+arr[n])
*/

int n, m, k;
const int maxN = 5000;
ll dp[maxN+1][maxN+1];
ll prefix[maxN+1];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n >> m >> k;
    for(int i = 1, a; i <= n; ++i) {
        cin >> a;
        prefix[i] = prefix[i-1] + a;
    }

    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= k; ++j) {
            dp[i][j] = max(dp[i][j], dp[i-1][j]);
            if(i-m>=0) dp[i][j] = max(dp[i][j], dp[i-m][j-1]+prefix[i]-prefix[i-m]);
        }
    }
    cout << dp[n][k];
}
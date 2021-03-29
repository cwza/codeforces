#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
1. Precompute [1, 2000] number's factors
2. DP
    dp[n][k] = sum(dp[x][k-1] for x in factors[n])
    dp[.][1] = 1
*/

int n, k;
const int maxN = 2000, maxK = 2000, M = 1e9+7;
vector<int> factors[maxN+1];
int dp[maxN+1][maxK+1];

void createFactors() {
    // O(nlogn)
    for(int i = 1; i <= maxN; ++i) {
        for(int j = i; j <= maxN; j += i) {
            factors[j].push_back(i);
        }
    }
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    createFactors();
    cin >> n >> k;
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= k; ++j) {
            if(j==1) {
                dp[i][j] = 1;
                continue;
            }
            for(int a = 0; a < factors[i].size(); ++a) {
                dp[i][j] = (dp[i][j] + dp[factors[i][a]][j-1]) % M;
            }
        }
    }
    int ans = 0;
    for(int i = 1; i <= n; ++i) ans = (ans + dp[i][k]) % M;
    cout << ans;
}
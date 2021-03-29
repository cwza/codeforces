#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
const int maxN = 1e5, maxA = 1e5;
ll counter[maxN+1];
ll dp[maxA+1];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n;
    int M = 0;
    for(int i = 0, a; i < n; ++i) {
        cin >> a;
        counter[a]++;
        M = max(M, a);
    }

    dp[0] = 0, dp[1] = counter[1];
    for(int i = 2; i <= M; ++i) { // i is the value in the array
        dp[i] = max(dp[i-1], dp[i-2] + counter[i]*i);
    }
    cout << dp[M];
}
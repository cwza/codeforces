#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
We can easily find that every 6 numbers are the same. 
It's like {x, y, y - x,  - x,  - y, x - y, x, y, y - x, ...}.
*/

const int M = 1e9+7;
int x, y, n;
int dp[6];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> x >> y >> n;
    dp[0] = x%M; if(dp[0] < 0) dp[0] += M;
    dp[1] = y%M; if(dp[1] < 0) dp[1] += M;
    for(int i = 2; i <= 5; ++i) {
        dp[i] = (dp[i-1] - dp[i-2]) % M;
        if(dp[i] < 0) dp[i] += M;
    }

    cout << dp[(n-1)%6];
}
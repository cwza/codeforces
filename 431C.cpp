#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, k, d;
const int maxN = 100, M = 1e9+7;
ll dp0[maxN+1], dp1[maxN+1];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n >> k >> d;
    dp0[0] = 1, dp1[0] = 0;
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= k; ++j) {
            if(i-j >= 0) {
                if(j < d) {
                    dp0[i] += dp0[i-j];
                    dp1[i] += dp1[i-j];
                } else {
                    dp1[i] += dp0[i-j] + dp1[i-j];
                }
                dp0[i] %= M;
                dp1[i] %= M;
            }
        }
    }
    cout << dp1[n];
}
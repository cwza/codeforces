#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m;
const int maxN = 500, maxM = 500, maxS = 1e6;
int sieve[maxS];
vector<int> primes;
int diff[maxN][maxM];

void createPrimes() {
    for(int x = 2; x < maxS; ++x) {
        if(sieve[x]) continue;
        for(int u = 2*x; u < maxS; u += x) {
            sieve[u] = x;
        }
    }
    for(int x = 2; x < maxS; ++x) {
        if(sieve[x]==0) primes.push_back(x);
    }
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    createPrimes();
    cin >> n >> m;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            int a;
            cin >> a;
            int prime = *lower_bound(primes.begin(), primes.end(), a);
            diff[i][j] = prime - a;
        }
    }
    int ans = 1e9;
    for(int i = 0; i < n; ++i) {
        ans = min(ans, accumulate(diff[i], diff[i]+m, 0));
    }
    for(int j = 0; j < m; ++j) {
        int sum = 0;
        for(int i = 0; i < n; ++i) {
            sum += diff[i][j];
        }
        ans = min(ans, sum);
    }
    cout << ans;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, k;
const int maxN = 1.5*1e5;
int inp[maxN];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> n >> k;
    for(int i = 0; i < n; ++i) cin >> inp[i];

    int total = accumulate(inp, inp+k, 0);
    int maxTotal = total;
    int ans = 0;
    for(int i = 1; i <= n-k; ++i) {
        int j = i + k - 1;
        total -= inp[i-1];
        total += inp[j];
        if(total < maxTotal) {
            maxTotal = total;
            ans = i;
        }
    }
    cout << ans+1;
}
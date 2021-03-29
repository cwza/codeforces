#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// https://codeforces.com/blog/entry/7241
int n, m, d;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n >> m >> d;
    int inp[n*m], N = n*m;
    for(int i = 0; i < N; ++i) cin >> inp[i];

    int remain = inp[0] % d;
    for(int i = 1; i < N; ++i) {
        if(inp[i]%d != remain) {
            cout << -1;
            return 0;
        }
    }

    sort(inp, inp+N);
    int median = inp[N/2];
    int ans = 0;
    for(int val : inp) {
        ans += abs(val-median) / d;
    }
    cout << ans;
}
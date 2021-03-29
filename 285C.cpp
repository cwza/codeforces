#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
const int maxN = 3e5;
int inp[maxN+1];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> inp[i];
    sort(inp+1, inp+n+1);

    ll ans = 0;
    for(int i = 1; i <= n; ++i) {
        ans += abs(i-inp[i]);
    }
    cout << ans;
}
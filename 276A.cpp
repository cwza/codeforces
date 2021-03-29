#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, k;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n >> k;
    int ans = -1e9-3;
    for(int i = 0, f, t; i < n; ++i) {
        cin >> f >> t;
        int joy;
        if(t <= k) joy = f;
        else joy = f - (t-k);
        ans = max(ans, joy);
    }
    cout << ans;
}
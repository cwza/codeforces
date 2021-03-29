#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n;
    int ans[n+1];
    for(int i = 1, a; i <= n; ++i) {
        cin >> a;
        ans[a] = i;
    }
    for(int i = 1; i <= n; ++i) cout << ans[i] << " ";
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n >> m;
    int ans[n+1]; fill(ans, ans+n+1, 0);
    for(int i = 1; i <= m; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        if(ans[a]==0 && ans[b]==0 && ans[c]==0) {
            ans[a] = 1, ans[b] = 2, ans[c] = 3;
        } else if(ans[a]!=0) {
            if(ans[a]==1) {
                ans[b] = 2, ans[c] = 3;
            } else if(ans[a]==2) {
                ans[b] = 1, ans[c] = 3;
            } else {
                ans[b] = 1, ans[c] = 2;
            }
        } else if(ans[b]!=0) {
            if(ans[b]==1) {
                ans[a] = 2, ans[c] = 3;
            } else if(ans[b]==2) {
                ans[a] = 1, ans[c] = 3;
            } else {
                ans[a] = 1, ans[c] = 2;
            }
        } else if(ans[c]!=0) {
            if(ans[c]==1) {
                ans[a] = 2, ans[b] = 3;
            } else if(ans[c]==2) {
                ans[a] = 1, ans[b] = 3;
            } else {
                ans[a] = 1, ans[b] = 2;
            }
        }
    }
    for(int i = 1; i <= n; ++i) cout << ans[i] << " ";
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> n;
    if(n%2 == 1) {
        cout << -1;
        return 0;
    }
    int ans[n+1];
    for(int i = 1; i <= n; ++i) {
        if(i%2 == 1) {
            ans[i] = i+1;
        } else {
            ans[i] = i-1;
        }
    }
    for(int i = 1; i <= n; ++i) cout << ans[i] << " ";
}
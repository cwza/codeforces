#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> n >> m;
    int aMax = 0, aMin = 101;
    for(int i = 0, a; i < n; ++i) {
        cin >> a;
        aMax = max(aMax, a);
        aMin = min(aMin, a);
    }
    int ans = max(aMax, aMin*2);
    for(int i = 0, b; i < m; ++i) {
        cin >> b;
        if(ans >= b) {
            cout << -1;
            return 0;
        }
    }
    cout << ans;
}
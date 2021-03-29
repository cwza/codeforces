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
    int inp[n];
    int m[n];
    int ans = 0;
    for(int i = 0, a; i < n; ++i) {
        cin >> a;
        inp[i] = a;
        m[a] = i;
        if(i==a) ans++;
    }
    if(ans==n) {
        cout << ans;
        return 0;
    }

    for(int i = 0; i < n; ++i) {
        if(i==inp[i]) continue;
        if(m[i]==inp[i]) {
            cout << ans + 2;
            return 0;
        }
    }
    cout << ans + 1;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> n;

    int l = 0, r = 0;
    for(int i = 0, a, b; i < n; ++i) {
        cin >> a >> b;
        l += a;
        r += b;
    }
    int ans = 0;
    if(l <= n/2) {
        ans += l;
    } else {
        ans += n - l;
    }
    if(r <= n/2) {
        ans += r;
    } else {
        ans += n - r;
    }
    cout << ans;
}
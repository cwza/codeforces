#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m;

int helper(int from, int to) {
    if(to >= from) {
        return to - from;
    } else {
        return n - (from-to);
    }
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> n >> m;
    ll ans = 0;
    int from = 1;
    for(int i = 1, a; i <= m; ++i) {
        cin >> a;
        ans += helper(from, a);
        from = a;
    }
    cout << ans;
}
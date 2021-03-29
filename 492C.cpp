#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, r, avg;
// const int maxN = 1e5;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n >> r >> avg;
    vector<array<ll, 2>> inp;
    ll remain = (ll)n * avg;
    for(int i = 0, a, b; i < n; ++i) {
        cin >> a >> b;
        remain -= a;
        if(a >= r) continue;
        inp.push_back({b, a});
    }
    sort(inp.begin(), inp.end());

    ll ans = 0;
    for(int i = 0; i < inp.size() && remain > 0; ++i) {
        ll val = min(remain, r-inp[i][1]);
        remain -= val;
        ans += val * inp[i][0];
    }
    cout << ans;
}
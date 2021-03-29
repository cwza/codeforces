#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, d;
const int inf = 1e9;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n >> d;
    vector<array<int, 2>> inp(n); // [(value, index), ...]
    for(int i = 0, a; i < n; ++i) {
        cin >> a;
        inp[i] = {a, i};
    }

    ll ans = 0;
    for(int i = 0; i < n; ++i) {
        auto iter = upper_bound(inp.begin(), inp.end(), array<int, 2>{inp[i][0]+d, inf});
        if(iter==inp.begin()) continue;
        iter--;
        int j = (*iter)[1];
        if(j-i-1 > 0) {
            ans += (1+(j-i-1))*(ll)(j-i-1)/2;
        }
    }
    cout << ans;
}
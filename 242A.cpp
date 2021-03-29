#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int x, y, a, b;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> x >> y >> a >> b;
    vector<array<int, 2>> ans;
    int aMin = max(a, b+1), aMax = x;
    for(int i = aMin; i <= aMax; ++i) {
        int bMin = b, bMax = min(i-1, y);
        for(int j = bMin; j <= bMax; ++j) {
            ans.push_back({i, j});
        }
    }
    cout << ans.size() << "\n";
    for(auto [a, b] : ans) cout << a << " " << b << "\n";
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, k;
vector<array<int, 3>> orders;
set<array<int, 2>> tables;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n;
    orders.resize(n);
    for(int i = 0, c, p; i < n; ++i) {
        cin >> c >> p;
        orders[i] = {p, c, i};
    }
    sort(orders.begin(), orders.end(), greater<array<int, 3>>());
    cin >> k;
    for(int i = 0, r; i < k; ++i) {
        cin >> r;
        tables.insert({r, i});
    }

    int total = 0;
    vector<array<int, 2>> ans;
    for(auto [p, c, oi] : orders) {
        auto iter = tables.lower_bound({c});
        if(iter!=tables.end()) {
            total += p;
            ans.push_back({oi, (*iter)[1]});
            tables.erase(iter);
        }
    }
    cout << ans.size() << " " << total << "\n";
    for(auto [a, b] : ans) cout << a+1 << " " << b+1 << "\n";
}
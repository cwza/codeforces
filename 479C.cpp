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
    vector<array<int, 2>> inp;
    for(int i = 0, a, b; i < n; ++i) {
        cin >> a >> b;
        inp.push_back({a, b});
    }
    sort(inp.begin(), inp.end());

    int ans = 0;
    for(auto[a, b] : inp) {
        if(b >= ans) ans = b;
        else ans = a;
    }
    cout << ans;
}
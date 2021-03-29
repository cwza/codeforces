#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
set<array<int, 2>> s; 

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n;
    for(int i = 0, x; i < n; ++i) {
        cin >> x;
        s.insert({x, i});
    }
    int cur = 101, ans = 0;
    while(s.size()) {
        auto iter = s.lower_bound({cur});
        if(iter==s.end()) {
            ans++;
            cur = 1;
            s.erase(s.begin());
        } else {
            cur++;
            s.erase(iter);
        }
    }
    cout << ans;
}
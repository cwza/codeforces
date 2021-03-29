#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
const int maxN = 1000;
int inp[maxN];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n;
    for(int i = 0; i < n; ++i) cin >> inp[i];
    vector<array<int, 2>> pairs;
    for(int i = 0; i < n-1; ++i) {
        int a = min(inp[i], inp[i+1]);
        int b = max(inp[i], inp[i+1]);
        pairs.push_back({a, b});
    }
    for(int i = 0; i < (int)pairs.size()-1; ++i) {
        for(int j = 1; j < (int)pairs.size(); ++j) {
            auto [x1, x2] = pairs[i];
            auto [x3, x4] = pairs[j];
            if((x1<x3 && x3<x2 && x2<x4) || (x3<x1 && x1<x4 && x4<x2)) {
                cout << "yes";
                return 0;
            }
        }
    }
    cout << "no";
}
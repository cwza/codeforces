#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, n2;
const int maxN = 3e5;
array<int, 2> inp[2*maxN];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);

    cin >> n;
    n2 = 2*n;
    for(int i = 0, a; i < n2; ++i) {
        cin >> a;
        inp[i] = {a, i};
    }
    sort(inp, inp + n2);

    vector<array<int, 2>> ans;
    for(int i = 0; i < n2-1; i+=2) {
        if(inp[i][0] != inp[i+1][0]) {
            cout << -1;
            return 0;
        }
        ans.push_back({inp[i][1], inp[i+1][1]});
    }

    for(auto [a, b] : ans) cout << a+1 << " " << b+1 << "\n";
}
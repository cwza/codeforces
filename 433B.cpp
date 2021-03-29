#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m;
const int maxN = 1e5;
ll inp[maxN+1], psum1[maxN+1], psum2[maxN+1];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> inp[i];
    for(int i = 1; i <= n; ++i) psum1[i] = psum1[i-1] + inp[i];
    sort(inp+1, inp+n+1);
    for(int i = 1; i <= n; ++i) psum2[i] = psum2[i-1] + inp[i];

    cin >> m;
    while(m--) {
        int qt, l, r;
        cin >> qt >> l >> r;
        if(qt == 1) {
            cout << psum1[r] - psum1[l-1] << "\n";
        } else {
            cout << psum2[r] - psum2[l-1] << "\n";
        }
    }
}
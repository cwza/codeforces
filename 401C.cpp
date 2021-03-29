#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m;
const int maxN = 1e6;
int inp[4*maxN+1];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    fill(inp, inp+4*maxN+1, -1);
    cin >> n >> m;
    if(m<n-1 || m>2*(n+1)) {
        cout << -1;
        return 0;
    }
    for(int i = 1; i <= n; ++i) inp[3*i] = 0;
    for(int i = 1; i <= n-1; ++i) inp[3*i+1] = 1;
    m -= (n-1);
    for(int i = 1; i <= 4*maxN && m; ++i) {
        if(inp[i]==-1) {
            inp[i] = 1;
            m--;
        }
    }
    for(int i = 1; i <= 4*maxN; ++i) {
        if(inp[i]!=-1) cout << inp[i];
    }
}
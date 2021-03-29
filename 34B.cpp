#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m;
const int maxN = 100;
int inp[maxN];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> n >> m;
    for(int i = 0; i < n; ++i) {
        cin >> inp[i];
    }
    sort(inp, inp+n);

    int ans = 0;
    for(int i = 0; i < m; ++i) {
        if(inp[i] < 0) ans += inp[i];
    }
    cout << -ans;
}
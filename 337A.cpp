#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m;
const int maxM = 50;
int f[maxM];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> n >> m;
    for(int i = 0; i < m; ++i) {
        cin >> f[i];
    }
    sort(f, f+m);
    int ans = 1e9;
    for(int i = 0; i <= m-n; ++i) {
        ans = min(ans, f[i+n-1]-f[i]);
    }
    cout << ans;
}

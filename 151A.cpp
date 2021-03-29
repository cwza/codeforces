#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int ans = min({k*l/nl, c*d, p/np}) / n;
    cout << ans;
}
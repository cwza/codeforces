#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m;
const int maxN = 1e5;
int table[maxN+1];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> n;
    for(int i = 1, a; i <= n; ++i) {
        cin >> a;
        table[a] = i;
    }
    cin >> m;
    ll ans1 = 0, ans2 = 0;
    while(m--) {
        int a;
        cin >> a;
        ans1 += table[a];
        ans2 += n - table[a] + 1;
    }
    cout << ans1 << " " << ans2;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> n;
    int ans = 0;
    int cur = 0;
    while(n--) {
        int a, b;
        cin >> a >> b;
        cur -= a;
        cur += b;
        ans = max(ans, cur);
    }
    cout << ans;
}
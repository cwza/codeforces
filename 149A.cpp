#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int k;
int inp[12];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> k;
    for(int i = 0; i < 12; ++i) cin >> inp[i];
    sort(inp, inp+12);

    int total = 0;
    int ans = 0;
    for(int i = 11; i >= 0; --i) {
        if(total >= k) {
            cout << ans;
            return 0;
        }
        total += inp[i];
        ans++;
    }
    if(total < k) {
        cout << -1;
    } else {
        cout << ans;
    }
}
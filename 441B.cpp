#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, v;
const int maxA = 3000;
array<int, 2> inp[maxA+3];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n >> v;
    for(int i = 1, a, b; i <= n; ++i) {
        cin >> a >> b;
        inp[a][1] += b;
    }

    int ans = 0;
    for(int i = 1; i <= maxA+1; ++i) {
        if(v <= inp[i][0]) {
            ans += v;
            inp[i+1][0] = inp[i][1]; 
        } else {
            ans += inp[i][0];
            int remain = v - inp[i][0];
            ans += min(remain, inp[i][1]);
            inp[i+1][0] = inp[i][1] - min(remain, inp[i][1]);
        }
    }
    cout << ans;
}
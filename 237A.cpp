#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
int counter[24][60];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n;
    for(int i = 0, a, b; i < n; ++i) {
        cin >> a >> b;
        counter[a][b]++;
    }

    int ans = 0;
    for(int i = 0; i < 24; ++i) {
        for(int j = 0; j < 60; ++j) 
            ans = max(ans, counter[i][j]);
    }
    cout << ans;
}
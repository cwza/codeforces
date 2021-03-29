#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int g[5][5];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < 5; ++j) cin >> g[i][j];
    }

    int s[5] = {0, 1, 2, 3, 4};
    int ans = 0;
    do {
        int happiness = 0;
        happiness += g[s[0]][s[1]] + g[s[1]][s[0]] + g[s[2]][s[3]] + g[s[3]][s[2]];
        happiness += g[s[1]][s[2]] + g[s[2]][s[1]] + g[s[3]][s[4]] + g[s[4]][s[3]];
        happiness += g[s[2]][s[3]] + g[s[3]][s[2]];
        happiness += g[s[3]][s[4]] + g[s[4]][s[3]];
        ans = max(ans, happiness);
    } while(next_permutation(s, s+5));
    cout << ans;
}
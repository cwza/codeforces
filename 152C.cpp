#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
In this task, it was necessary to understand that in position 1 Vasya can get any name of a special form. More exactly, it's the name of form s = s1 s2 s3 s4 ... sm, where s1 — the first letter of any of the names, s2 — the second letter of any of the names, ... sm — m-th letter of any of the names. Then the answer to the problem is the product of cnti (1 ≤ i ≤ m), where cnti is a number of different letters in the names placed in position i.
*/

int n, m;
const int maxN = 100, maxM = maxN, M = 1e9+7;
string grid[maxN];
bool dup[26][maxM];
int cnt[maxM];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n >> m;
    for(int i = 0; i < n; ++i) {
        cin >> grid[i];
        for(int j = 0; j < m; ++j) {
            if(dup[grid[i][j]-'A'][j]) continue;
            cnt[j]++;
            dup[grid[i][j]-'A'][j] = true;
        }
    }
    ll ans = 1;
    for(int i = 0; i < m; ++i) {
        ans = (ans*cnt[i]) % M; 
    }
    cout << ans;
}
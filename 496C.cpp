#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int n, m;
const int maxN = 100, maxM = 100;
string grid[maxN];
bool removed[maxM];

bool check(int curCol) {
    string s1 = "";
    for(int col = 0; col <= curCol; ++col) {
        if(!removed[col]) s1 += grid[0][col];
    }
    for(int row = 1; row < n; ++row) {
        string s2 = "";
        for(int col = 0; col <= curCol; ++col) {
            if(!removed[col]) s2 += grid[row][col];
        }
        if(s2<s1) return false;
        s1 = s2;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n >> m;
    for(int i = 0; i < n; ++i) cin >> grid[i];

    int ans = 0;
    for(int col = 0; col < m; ++col) {
        if(!check(col)) {
            removed[col] = true;
            ans++;
        }
    }
    cout << ans;
}
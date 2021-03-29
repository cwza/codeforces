#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m;
const int maxN = 100;
string grid[maxN];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> n >> m;
    for(int i = 0; i < n; ++i) cin >> grid[i];

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            if(grid[i][j]=='-') continue;
            if((i+j)%2==0) grid[i][j] = 'W';
            else grid[i][j] = 'B';
        }
    }
    for(int i = 0; i < n; ++i) {
        cout << grid[i] << "\n";
    }
}
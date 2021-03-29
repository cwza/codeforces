#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n >> m;
    string grid[n];
    for(int i = 0; i < n; ++i) {
        cin >> grid[i];
    }

    int ans = 0;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            if(grid[i][j]=='W') {
                int xs[] = {0, 0, 1, -1};
                int ys[] = {1, -1, 0, 0};
                for(int k = 0; k < 4; ++k) {
                    int adjI = i + xs[k];
                    int adjJ = j + ys[k];
                    if(adjI>=0 && adjI<n && adjJ>=0 && adjJ<m && grid[adjI][adjJ]=='P') {
                        ans++;
                        // grid[adjI][adjJ] = '.';
                        break;
                    }
                }
            }
        }
    }
    cout << ans;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
int grid[20][20];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> n;
    int N = 2*n+1;
    // fill(&grid[0][0], &grid[0][0]+N*N, -1);
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            int x = i - n, y = j - n;
            int val = n - (abs(x) + abs(y));
            if(y>0 && val<0) grid[i][j] = -2;
            else if(val < 0) grid[i][j] = -1;
            else grid[i][j] = val;
        }
    }

    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            if(grid[i][j]==-2) continue;
            if(grid[i][j] == -1) cout << " ";
            else cout << grid[i][j];
            if(j!=N-1 && grid[i][j+1]!=-2) cout << " ";
        }
        cout << "\n";
    }
}
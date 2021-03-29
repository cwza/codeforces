#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
const int maxN = 200, maxX = 2000;
array<int, 2> inp[maxN];
bool grid[maxX][maxX];

bool valid(int x, int y) {
    int count = 0;
    for(int i = 0; i < x; ++i) {
        if(grid[i][y]) {
            count++;
            break;
        }
    }
    for(int i = x+1; i < 2000; ++i) {
        if(grid[i][y]) {
            count++;
            break;
        }
    }
    for(int i = 0; i < y; ++i) {
        if(grid[x][i]) {
            count++;
            break;
        }
    }
    for(int i = y+1; i < 2000; ++i) {
        if(grid[x][i]) {
            count++;
            break;
        }
    }
    if(count==4) return true;
    else return false;
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> n;
    for(int i = 0, a, b; i < n; ++i) {
        cin >> a >> b; a += 1000; b += 1000;
        inp[i] = {a, b};
        grid[a][b] = true;
    }

    int ans = 0;
    for(int i = 0; i < n; ++i) {
        auto [x, y] = inp[i];
        if(valid(x, y)) {
            ans++;
        }
    }
    cout << ans;
}
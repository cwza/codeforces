#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m, k;

bool isValid(int x, int y) {
    if(x>=0 && x<n && y>=0 && y<m) return true;
    return false;
}

array<int, 2> next(int x, int y) {
    if(x%2==0) {
        if(isValid(x, y+1)) {
            cout << x+1 << " " << y+2 << " "; 
            return {x, y+1};
        } else if(isValid(x+1, y)) {
            cout << x+2 << " " << y+1 << " ";
            return {x+1, y};
        } else {
            cout << "\n";
            exit(0);
        }
    } else {
        if(isValid(x, y-1)) {
            cout << x+1 << " " << y << " ";
            return {x, y-1};
        } else if(isValid(x+1, y)) {
            cout << x+2 << " " << y+1 << " ";
            return {x+1, y};
        } else {
            cout << "\n";
            exit(0);
        }
    }
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n >> m >> k;
    int x = 0, y = -1;
    for(int i = 0; i < k-1; ++i) {
        cout << "2 ";
        for(int j = 0; j < 2; ++j) {
            auto [nextX, nextY] = next(x, y);
            x = nextX, y = nextY;
        }
        cout << "\n";
    }
    int remain = n*m - (k-1)*2;
    cout << remain << " ";
    while(true) {
        auto [nextX, nextY] = next(x, y);
        x = nextX, y = nextY;
    }
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int state[3][3];

void press(int x, int y) {
    state[x][y] ^= 1;
    int xs[4] = {0, 0, 1, -1};
    int ys[4] = {1, -1, 0, 0};
    for(int i = 0; i < 4; ++i) {
        int nextX = x + xs[i];
        int nextY = y + ys[i];
        if(nextX >= 0 && nextX < 3 && nextY >= 0 && nextY < 3) {
            state[nextX][nextY] ^= 1;
        }
    }
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    fill(&state[0][0], &state[0][0]+9, 1);
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            int times;
            cin >> times;
            while(times--) press(i, j);
        }
    }
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            cout << state[i][j];
        }
        cout << "\n";
    }
}
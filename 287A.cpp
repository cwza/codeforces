#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string grid[4];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    for(int i = 0; i < 4; ++i) cin >> grid[i];

    for(int i = 0; i <= 2; ++i) {
        for(int j = 0; j <= 2; ++j) {
            int count1 = 0, count2 = 0;
            int is[] = {0, 0, 1, 1};
            int js[] = {0, 1, 0, 1};
            for(int k = 0; k < 4; ++k) {
                char value = grid[i+is[k]][j+js[k]];
                if(value=='#') count1++;
                if(value=='.') count2++;
            }
            if(max(count1, count2)==4 || max(count1, count2)==3) {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
}
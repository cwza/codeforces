#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m, k;
const int maxN = 1000, maxM = 1000;
int inp[maxN+1][maxM+1];
int row[maxN+1], col[maxM+1];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n >> m >> k;
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= m; ++j) {
            cin >> inp[i][j];
        }
    }
    iota(row+1, row+n+1, 1);
    iota(col+1, col+m+1, 1);

    while(k--) {
        char qt;
        cin >> qt;
        if(qt=='r') {
            int x, y;
            cin >> x >> y;
            swap(row[x], row[y]);
        } else if(qt=='c') {
            int x, y;
            cin >> x >> y;
            swap(col[x], col[y]);
        } else {
            int x, y;
            cin >> x >> y;
            cout << inp[row[x]][col[y]] << "\n";
        }
    }
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, k;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n >> k;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            if(i==j) cout << k << " ";
            else cout << 0 << " ";
        }
        cout << "\n";
    }
}
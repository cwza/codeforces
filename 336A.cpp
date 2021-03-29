#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int x, y;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> x >> y;

    ll val = abs(x) + abs(y);
    if(x>0 && y>0) {
        cout << 0 << " " << val << " " << val << " " << 0;
    } else if(x<0 && y>0) {
        cout << -val << " " << 0 << " " << 0 << " " << val; 
    } else if(x<0 && y<0) {
        cout << -val << " " << 0 << " " << 0 << " " << -val;
    } else {
        cout << 0 << " " << -val << " " << val << " " << 0;
    }
}
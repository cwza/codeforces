#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int x1, y_1, x2, y2;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> x1 >> y_1 >> x2 >> y2;

    if(x1==x2) {
        int diff = abs(y2-y_1);
        cout << x1+diff << " " << y_1 << " " << x2+diff << " " << y2;
        return 0;
    }
    if(y_1==y2) {
        int diff = abs(x2-x1);
        cout << x1 << " " << y_1+diff << " " << x2 << " " << y2+diff;
        return 0;
    }
    if(abs(x2-x1)==abs(y2-y_1)) {
        cout << x1 << " " << y2 << " " << x2 << " " << y_1;
        return 0;
    }
    cout << -1;
}
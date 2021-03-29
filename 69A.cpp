#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
int xx, yy, zz;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> n;
    for(int i = 0; i < n; ++i) {
        int x, y, z;
        cin >> x >> y >> z;
        xx += x; yy += y; zz += z;
    }
    if(xx==0 && yy==0 && zz==0) cout << "YES";
    else cout << "NO";
}
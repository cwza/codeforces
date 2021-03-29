#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
https://codeforces.com/blog/entry/81800
*/

int n;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> n;
    int count0 = 0, count5 = 0;
    for(int i = 0, a; i < n; ++i) {
        cin >> a;
        if(a == 0) count0++;
        if(a == 5) count5++;
    }

    if(count0 == 0) {
        cout << -1;
        return 0;
    }
    if(count5 < 9) {
        cout << 0;
        return 0;
    }

    for(int i = count5; i >= 0; --i) {
        if((i*5)%9 == 0) {
            count5 = i;
            break;
        }
    }
    // cout << count5 << " " << count0;
    cout << string(count5, '5') << string(count0, '0');
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
4x + 7y = n
try all x from 0 to 1e6, if (n-4x)%7 == 0, then that is solution
*/

int n;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n;
    for(int x = 0; x <= 1e6; ++x) {
        if(n-4*x < 0) {
            cout << -1;
            return 0;
        }
        if(((n-4*x)%7) == 0) {
            cout << string(x, '4') << string((n-4*x)/7, '7');
            return 0;
        }
    }
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a, b, n;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> a >> b >> n;
    for(int i = 0; i <= 9; ++i) {
        if((a*10+i)%b == 0) {
            cout << a << i << string(n-1, '0');
            return 0;
        }
    }
    cout << -1;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, k;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> n >> k;

    if(n%2==0) {
        if(k <= n/2) cout << 1+2*(k-1);
        else cout << 2+2*(k-n/2-1);
    } else {
        if(k <= n/2+1) cout << 1+2*(k-1);
        else cout << 2+2*(k-(n/2+1)-1);
    }
    // if(k <= ceil((double)n/2)) cout << 1+2*(k-1);
    // else cout << 2+2*(k-ceil((double)n/2)-1);
}
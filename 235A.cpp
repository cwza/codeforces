#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n;
    if(n==1) {
        cout << 1;
        return 0;
    }
    if(n==2) {
        cout << 2;
        return 0;
    }
    if(n%2==1) {
        cout << n*(n-1)*(n-2);
        return 0;
    }
    if(n%6!=0) {
        cout << n*(n-1)*(n-3);
        return 0;
    }
    cout << max(n*(n-1)*(n-5), (n-1)*(n-2)*(n-3));
}
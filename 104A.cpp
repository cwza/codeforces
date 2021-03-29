#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n;
    n = n - 10;

    if(n<=0 || n>=12) {
        cout << 0;
    } else if(n>=1 && n<=9) {
        cout << 4;
    } else if(n==10) {
        cout << 15;
    } else if(n==11) {
        cout << 4;
    }

}
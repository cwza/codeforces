#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);

    cin >> n >> m;

    if(n <= m) {
        while(n > 0) {
            cout << "GB";
            n--;
            m--;
        }
        while(m--) cout << "G";
    } else {
        while(m > 0) {
            cout << "BG";
            n--;
            m--;
        }
        while(n--) cout << "B";
    }
}
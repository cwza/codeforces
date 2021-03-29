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
    int total = 0;
    int evenCount = 0, oddCount = 0;
    for(int i = 0, a; i < n; ++i) {
        cin >> a;
        if(a%2==0) evenCount++;
        else oddCount++;
        total += a;
    }

    if(total%2==0) cout << evenCount;
    else cout << oddCount;
}
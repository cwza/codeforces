#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, x;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n >> x;
    int sum = 0;
    for(int i = 0, a; i < n; ++i) {
        cin >> a;
        sum += a;
    }
    sum = abs(sum);
    if(sum%x==0) cout << sum/x;
    else cout << sum/x+1;
}
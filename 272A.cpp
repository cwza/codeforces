#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    int n;
    cin >> n;
    int total = 0;
    for(int i = 0, a; i < n; ++i) {
        cin >> a;
        total += a;
    }

    int ans = 0;
    for(int i = 1; i <= 5; ++i) {
        if((total + i - 1) % (n+1)!=0) {
            ans++;
        }
    }
    cout << ans;
}
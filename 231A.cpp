#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    int n;
    cin >> n;
    int ans = 0;
    for(int i = 0; i < n; ++i) {
        int a = 0;
        for(int j = 0; j < 3; ++j) {
            int b;
            cin >> b;
            a += b;
        }
        if(a >= 2) ans++;
    }
    cout << ans;
}
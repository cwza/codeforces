#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> n >> m;

    int ans = 0;
    for(int a = 0; a <= min(n, m); ++a) {
        for(int b = 0; b <= min(n, m); ++b) {
            if(a*a+b==n && a+b*b==m) ans++;
        }
    }
    cout << ans;
}
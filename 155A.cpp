#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> n;
    int a;
    cin >> a;
    int maxV = a, minV = a;

    int ans = 0;
    for(int i = 1; i < n; ++i) {
        cin >> a;
        if(a > maxV) {
            maxV = a;
            ans++;
        }
        if(a < minV) {
            minV = a;
            ans++;
        }
    }
    cout << ans;
}
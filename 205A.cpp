#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> n;
    int minValue = 1e9+1;
    int count = 0;
    int ans = -1;
    for(int i = 1, a; i <= n; ++i) {
        cin >> a;
        if(a < minValue) {
            minValue = a;
            count = 1;
            ans = i;
        } else if(a == minValue) {
            count++;
        }
    }
    if(count > 1) cout << "Still Rozdil";
    else cout << ans;
}
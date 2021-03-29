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
    if(n==1) {
        cout << 1;
        return 0;
    }
    int inp[n];
    for(int i = 0; i < n; ++i) cin >> inp[i];

    int i = 0, j = 2;
    int ans = 2;
    while(j < n) {
        while(j < n && inp[j-2]+inp[j-1]==inp[j]) j++;
        ans = max(ans, j-i);
        j++;
        i = j - 2;
    }
    cout << ans;
}
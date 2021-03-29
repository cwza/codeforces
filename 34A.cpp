#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
const int maxN = 100;
int inp[maxN];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> n;
    for(int i = 0; i < n; ++i) cin >> inp[i];

    int minDiff = abs(inp[0]-inp[n-1]);
    int ans1 = 0, ans2 = n-1;
    for(int i = 0; i < n-1; ++i) {
        int diff = abs(inp[i]-inp[i+1]);
        if(diff < minDiff) {
            ans1 = i;
            ans2 = i+1;
            minDiff = diff;
        }
    }
    cout << ans1+1 << " " << ans2+1;
}
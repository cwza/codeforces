#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, t;
const int maxN = 1e5;
int inp[maxN];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n >> t;
    for(int i = 0; i < n; ++i) cin >> inp[i];

    int i = 0, j = 0;
    int sum = 0;
    int ans = 0;
    while(i < n && j < n) {
        while(j < n && sum+inp[j]<=t) {
            sum += inp[j];
            j++;
        }
        ans = max(ans, j-i);
        sum -= inp[i];
        i++;
    }
    cout << ans;
}
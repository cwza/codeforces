#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, k;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n >> k;
    int inp[n];
    for(int i = 0; i < n; ++i) {
        cin >> inp[i];
        if(inp[i] < 0 && k > 0) {
            inp[i] = -inp[i];
            k--;
        }
    }
    if(k > 0) {
        if(k%2!=0) {
            auto iter = min_element(inp, inp+n);
            *iter = -(*iter);
        }
    }
    cout << accumulate(inp, inp+n, 0);
}
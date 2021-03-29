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
    int inp[n+1];
    for(int i = 1; i <= n; ++i) {
        cin >> inp[i];
    }

    // Find the first position that start decreasing from left
    int l = -1;
    for(int i = 1; i <= n-1; ++i) {
        if(inp[i+1]-inp[i] < 0) {
            l = i;
            break;
        }
    }
    if(l==-1) { // The array is already sorted
        cout << "yes\n";
        cout << "1 1";
        return 0;
    }
    // Find the first position that start increasing from right
    int r = -1;
    for(int i = n; i >= 2; --i) {
        if(inp[i-1]-inp[i] > 0) {
            r = i;
            break;
        }
    }
    // reverse the array from l to r and check the final array is sorted or not
    reverse(inp+l, inp+r+1);
    for(int i = 1; i <= n-1; ++i) {
        if(inp[i] > inp[i+1]) {
            cout << "no";
            return 0;
        }
    }
    cout << "yes\n";
    cout << l << " " << r;
}
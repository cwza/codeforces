#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
1. Put largest one to most left
2. Put smallest one to most right
3. Put remaining in their center by increasingly order
*/

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    int inp[n];
    for(int i = 0; i < n; ++i) {
        cin >> inp[i];
    }
    sort(inp, inp+n);
    swap(inp[0], inp[n-1]);
    for(int a : inp) cout << a << " ";
}
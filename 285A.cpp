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
    iota(inp, inp+n, 1);
    reverse(inp, inp+k+1);
    for(int a : inp) cout << a << " ";
}
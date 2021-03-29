#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
// const int maxN = 1000;
// int inp[maxN+2];

// void helper(int i) {
//     if(i==n) return;
//     helper(i+1);
//     swap(inp[i], inp[i+1]);
// }

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> n;
    // for(int i = 1; i <= n; ++i) inp[i] = i;
    // helper(1);
    // for(int i = 1; i <= n; ++i) cout << inp[i] << " ";

    cout << n << " ";
    for(int i = 1; i <= n-1; ++i) cout << i << " ";
}
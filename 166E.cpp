#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
const int maxN = 1e7, M = 1e9+7;
ll dpD[maxN+1];
ll dpA[maxN+1];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n;
    dpD[1] = 0, dpA[1] = 1;
    for(int i = 2; i <= n; ++i) {
        dpA[i] = (2*dpA[i-1] + dpD[i-1]) % M;
        dpD[i] = (3*dpA[i-1]) % M;
    }
    cout << dpD[n];
}
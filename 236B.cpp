#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int maxN = 1e6, M = 1073741824; 
ll d[maxN+1];


int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    // Preprocess to calculate the number of factors for 1 ~ 1e6
    for(int i = 1; i <= maxN; ++i) {
        for(int j = i; j <= maxN; j += i) {
            d[j]++;
        }
    }

    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    for(int i = 1; i <= a; ++i) {
        for(int j = 1; j <= b; ++j) {
            for(int k = 1; k <= c; ++k) {
                ans = (ans + d[i*j*k]) % M;
            }
        }
    }
    cout << ans;
}
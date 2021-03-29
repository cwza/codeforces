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
    int cnt = 0;
    for(int i = 0, a; i < n; ++i) {
        cin >> a;
        if(a <= 5-k) cnt++;
    }
    cout << cnt / 3;
}
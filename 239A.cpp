#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
n/k <= 10^5
so we can iterate through all k's multipliers that <= n
*/

int y, k, n;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> y >> k >> n;
    int count = 0;
    for(int sum = k; sum <= n; sum += k) {
        int x = sum - y;
        if(x >= 1) {
            cout << sum - y << " ";
            count++;
        }
    }
    if(count == 0) cout << -1;
}
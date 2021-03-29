#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
Probability of m face dices throw n times largest is k:
p(k) = ( (k^n-(k-1)^n)/m^n ) * k
Ans = 1*p(1)+2*p(2)+...+m*P(m)
*/

int m, n;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> m >> n;

    double ans = 0;
    for(int k = 1; k <= m; ++k) {
        // ans += (pow(k, n)-pow(k-1, n))/pow(m, n) * k;
        ans += (pow((double)k/m, n)-pow((double)(k-1)/m, n)) * k;
    }
    cout.precision(5);
    cout << ans;
}
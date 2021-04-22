#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int a, b, n;
const int maxN = 1e6, M = 1e9+7;
ll fact[maxN+1];

long long modInv(long long b, long long M){
    // return inv(b) % M
    long long ex = M-2;
    if (b==1) return 1;
    long long r = 1;
    while (ex) {
        if (ex&1)r=(r * b)%M;
        ex = ex >> 1;
        b = (b * b)%M;
    }
    return r;
}

void pre_fact() {
    fact[0] = 1;
    for(int i = 1; i <= n; ++i) {
        fact[i] = (fact[i-1] * i) % M;
    }
}

bool check(int sum, int a, int b) {
    while(sum) {
        int r = sum % 10;
        if(r != a && r != b) return false;
        sum = sum / 10;
    }
    return true;
}

int choose(int n, int m) {
    ll up = fact[n];
    ll down = (fact[m] * fact[n-m]) % M;
    return (up * modInv(down, M)) % M;
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> a >> b >> n;

    pre_fact();
    ll ans = 0;
    for(int i = 0; i <= n; ++i) {
        ll sum = a*i + b*(n-i);
        if(!check(sum, a, b)) continue;
        ans = (ans + choose(n, i)) % M;
    }
    cout << ans;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
Key: It can be shown that only squares of prime numbers are T-primes
*/
int n;
const int maxS = 1e6;
int sieve[maxS+1];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    for(int x = 2; x <= maxS; ++x) {
        if(sieve[x]) continue;
        for(int i = 2*x; i <= maxS; i += x) {
            sieve[i] = x;
        }
    }
    set<ll> s;
    for(int x = 2; x <= maxS; ++x) {
        if(sieve[x]==0) s.insert((ll)x*x); 
    }

    cin >> n;
    for(int i = 0; i < n; ++i) {
        ll a;
        cin >> a;
        if(s.count(a)) cout << "YES";
        else cout << "NO";
        cout << "\n";
    }
}
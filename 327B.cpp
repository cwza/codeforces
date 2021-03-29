#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 1e7;
int sieve[N+1];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    // sieve to generate prime numbers that smaller than 10^7
    for(int x = 2; x <= N; ++x) {
        if(sieve[x]!=0) continue;
        for(int u = 2*x; u <= N; u += x) {
            sieve[u] = x;
        }
    }

    int n;
    cin >> n;
    int count = 0;
    for(int i = 2; i <= N && count < n; ++i) {
        if(sieve[i]==0) {
            cout << i << " ";
            count++;
        }
    }
}
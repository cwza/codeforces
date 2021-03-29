#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
const int maxN = 1e5;
int ls[maxN], rs[maxN];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> n;
    int lmin = 1e9+1, rmax = 0;
    for(int i = 0; i < n; ++i) {
        cin >> ls[i];
        cin >> rs[i];
        lmin = min(lmin, ls[i]);
        rmax = max(rmax, rs[i]);
    }

    for(int i = 0; i < n; ++i) {
        if(ls[i]==lmin && rs[i]==rmax) {
            cout << i+1;
            return 0;
        }
    }
    cout << -1;
}
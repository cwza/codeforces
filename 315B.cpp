#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m;
const int maxN = 1e5;
ll inp[maxN+1];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n >> m;
    for(int i = 1; i <= n; ++i) cin >> inp[i];

    ll acc = 0;
    while(m--) {
        int qt;
        cin >> qt;
        if(qt==1) {
            int v, x;
            cin >> v >> x;
            inp[v] = x - acc;
        } else if(qt==2) {
            int y;
            cin >> y;
            acc += y;
        } else {
            int q;
            cin >> q;
            cout << inp[q] + acc << "\n";
        }
    }
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
const int maxN = 5000;
bool check[maxN+1];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n;
    int ans = 0;
    for(int i = 1, a; i <= n; ++i) {
        cin >> a;
        if(a>=1 && a<=n && check[a]==false) {
            check[a] = true;
            continue;
        } else {
            ans++;
        }
    }
    cout << ans;
}
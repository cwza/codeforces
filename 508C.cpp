#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int m, t, r;
vector<int> inp;
int cover[500];


int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> m >> t >> r;
    inp.resize(m);
    for(int i = 0; i < m; ++i) cin >> inp[i];
    sort(inp.begin(), inp.end());

    int ans = 0;
    for(int i = 0; i < m; ++i) {
        int gt = inp[i];
        int need = r - cover[gt];
        if(need <= 0) continue;
        ans += need;
        for(int j = 1; j <= need; ++j) {
            for(int k = gt-j+1; k <= gt-j+t; ++k) {
                if(k>=0) cover[k]++;
            }
        }
        if(cover[gt]<r) {
            cout << -1;
            return 0;
        }
    }
    cout << ans;
}
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
    bool seg[n*k+1]; fill(seg, seg+n*k+1, false);
    vector<int> ans[k+1];
    for(int i = 1, a; i <= k; ++i) {
        cin >> a;
        ans[i].push_back(a);
        seg[a] = true;
    }
    int j = 1;
    for(int i = 1; i <= n*k; ++i) {
        if(!seg[i]) {
            if(ans[j].size() >= n) j++;
            ans[j].push_back(i);
        }
    }
    for(int i = 1; i <= k; ++i) {
        for(int j = 0; j < n; ++j) {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
}
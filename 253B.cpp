#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
vector<int> inp;

int helper(int i, int j) {
    if(i>=j || inp[j] <= 2*inp[i]) return 0;
    int ans = 1e5;
    auto iter = upper_bound(inp.begin()+i, inp.begin()+j+1, 2*inp[i]);
    int k = iter - inp.begin();
    ans = min(ans, j-k+1);
    iter = lower_bound(inp.begin()+i, inp.begin()+j+1, ceil((double)inp[j]/2));
    iter--;
    k = iter - inp.begin();
    ans = min(ans, k-i+1);
    return min(ans, 2+helper(i+1, j-1));
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    cin >> n;
    inp.resize(n);
    for(int i = 0; i < n; ++i) cin >> inp[i];
    sort(inp.begin(), inp.end());

    cout << helper(0, n-1);
}
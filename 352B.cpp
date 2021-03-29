#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
const int maxN = 1e5;
array<int, 2> inp[maxN];

int check(int i, int j) {
    if(i==j) return 0;
    int diff = inp[i+1][1]-inp[i][1];
    if(j-i==1) return diff;
    for(int k = 1; i+k <= j-1; ++k) {
        if(inp[i+k+1][1]-inp[i+k][1] != diff) return -1;
    }
    return diff;
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> n;
    for(int i = 0, a; i < n; ++i) {
        cin >> a;
        inp[i] = {a, i};
    }
    sort(inp, inp+n);

    int i = 0, j = 0;
    vector<array<int, 2>> ans;
    while(i < n) {
        while(j < n && inp[j][0]==inp[i][0]) j++;
        int diff = check(i, j-1);
        if(diff!=-1) ans.push_back({inp[i][0], diff});
        i = j;
    }
    cout << ans.size() << "\n";
    for(auto [a, b]: ans) cout << a << " " << b << "\n";
}
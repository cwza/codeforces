#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, k;
const int maxN = 50;
array<int, 2> inp[maxN];

bool cmp(array<int, 2> &a, array<int, 2> &b) {
    if(a[0]==b[0]) return a[1] < b[1];
    return a[0] > b[0];
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n >> k; k--;
    for(int i = 0, a, b; i < n; ++i) {
        cin >> a >> b;
        inp[i] = {a, b};
    }
    sort(inp, inp+n, cmp);

    int ans = 1;
    int i = k;
    while(i>=0 && inp[i]==inp[k]) i--;
    ans += k - i - 1;
    i = k;
    while(i<n && inp[i]==inp[k]) i++;
    ans += i - k - 1;
    cout << ans;
}
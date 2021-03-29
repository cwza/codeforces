#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, q;
const int maxN = 2e5, maxQ = 2e5;
int inp[maxN+1];
array<int, 2> queries[maxQ+1];
int counter[maxN+2];
array<int, 2> order[maxN+1];
int arr[maxN+1];
ll prefix[maxN+1];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n >> q;
    for(int i = 1; i <= n; ++i) cin >> inp[i];
    sort(inp+1, inp+n+1, greater<int>());
    for(int i = 1, a, b; i <= q; ++i) {
        cin >> a >> b;
        queries[i] = {a, b};
        counter[a]++;
        counter[b+1]--;
    }
    for(int i = 1; i <= n; ++i) {
        counter[i] += counter[i-1];
    }
    for(int i = 1; i <= n; ++i) {
        order[i] = {counter[i], i};
    }
    sort(order+1, order+n+1, greater<array<int, 2>>());
    for(int i = 1; i <= n; ++i) {
        arr[order[i][1]] = inp[i];
    }

    for(int i = 1; i <= n; ++i) {
        prefix[i] = prefix[i-1] + arr[i];
    }

    ll ans = 0;
    for(int i = 1; i <= q; ++i) {
        auto [a, b] = queries[i];
        ans += prefix[b] - prefix[a-1];
    }
    cout << ans;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
The smallest k will be covered by the largest k.
Binary search to find this k.
*/

int n;
const int maxN = 5e5;
int inp[maxN];

bool cond(int k) {
    for(int i = 0; i <= k; ++i) {
        if(inp[i]*2 > inp[n-k-1+i]) return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> inp[i];
    sort(inp, inp+n);

    int l = 0, r = n/2;
    while(l < r) {
        int mid = l + (r-l)/2;
        if(cond(mid)) r = mid;
        else l = mid + 1;
    }
    int k = l - 1 + 1;
    cout << n - k;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
const int maxN = 1e5;
array<int, 2> inp[maxN];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n;
    for(int i = 0, a, b; i < n; ++i) {
        cin >> a >> b;
        inp[i] = {a, b};
    }
    sort(inp, inp+n);

    int curMax = 0;
    for(int i = 0; i < n; ++i) {
        if(curMax > inp[i][1]) {
            cout << "Happy Alex";
            return 0;
        }
        curMax = max(curMax, inp[i][1]);
    }
    cout << "Poor Alex";
}
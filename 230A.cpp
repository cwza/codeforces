#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int s, n;
const int maxN = 1000;
array<int, 2> inp[maxN];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> s >> n;
    for(int i = 0, a, b; i < n; ++i) {
        cin >> a >> b;
        inp[i] = {a, b};
    }
    sort(inp, inp + n);

    for(int i = 0; i < n; ++i) {
        if(s <= inp[i][0]) {
            cout << "NO";
            return 0;
        }
        s += inp[i][1];
    }
    cout << "YES";
}